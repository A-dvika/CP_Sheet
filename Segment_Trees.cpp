#include <iostream>
#include <vector>

using namespace std;

class SegmentTree {
private:
    vector<int> tree;
    int n;

    void buildTree(vector<int>& nums, int node, int start, int end) {
        if (start == end) {
            tree[node] = nums[start];
            return;
        }

        int mid = start + (end - start) / 2;
        buildTree(nums, 2 * node + 1, start, mid);
        buildTree(nums, 2 * node + 2, mid + 1, end);
        tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
    }

    int queryRange(int node, int start, int end, int left, int right) {
        if (right < start || left > end)
            return 0; // Outside the range

        if (left <= start && right >= end)
            return tree[node]; // Inside the range

        int mid = start + (end - start) / 2;
        int leftSum = queryRange(2 * node + 1, start, mid, left, right);
        int rightSum = queryRange(2 * node + 2, mid + 1, end, left, right);
        return leftSum + rightSum;
    }

public:
    SegmentTree(vector<int>& nums) {
        n = nums.size();
        if (n > 0) {
            int height = ceil(log2(n));
            int treeSize = 2 * pow(2, height) - 1;
            tree.resize(treeSize);
            buildTree(nums, 0, 0, n - 1);
        }
    }

    int query(int left, int right) {
        if (left < 0 || right >= n || left > right)
            return -1; // Invalid query range
        return queryRange(0, 0, n - 1, left, right);
    }
};

int main() {
    vector<int> nums = {1, 3, 5, 7, 9, 11};
    SegmentTree segTree(nums);

    // Query sum in range [2, 4]
    cout << "Sum in range [2, 4]: " << segTree.query(2, 4) << endl;

    return 0;
}
