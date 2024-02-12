#include <bits/stdc++.h>
using namespace std;

// Macros for commonly used types
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vpii vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>

// Macros for commonly used functions
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair
#define fi first
#define se second

// Macros for loop constructs
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) for (int i = 0; i < (a); ++i)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) for (int i = (a)-1; i >= 0; --i)
#define trav(a, x) for (auto &a : x)

// Debugging macros
#define debug(x) cerr << #x << " = " << x << endl
#define debug2(x, y) cerr << #x << " = " << x << ", " << #y << " = " << y << endl
#define debugv(v) cerr << #v << " = "; for (auto it : v) cerr << it << " "; cerr << endl;

// Fast I/O
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LL_INF = 1e18;
const double PI = acos(-1.0);

// Custom Input/Output Functions
template<typename T>
void read(T &x) {
    cin >> x;
}

template<typename T>
void print(T x) {
    cout << x;
}

template<typename T>
void println(T x) {
    cout << x << "\n";
}

// Custom Comparator Functions
bool comp(int a, int b) {
    return a > b; // Sort in descending order
}

// Modular Arithmetic Functions
int add(int a, int b) {
    return (a + b) % MOD;
}

int sub(int a, int b) {
    return (a - b + MOD) % MOD;
}

int mult(int a, int b) {
    return (a * b) % MOD;
}

int pow(int x, int y) {
    int res = 1;
    while (y > 0) {
        if (y & 1) res = mult(res, x);
        x = mult(x, x);
        y >>= 1;
    }
    return res;
}

int main() {
    fastIO;
     int t;
    read(t); // Number of test cases
    
    while (t--) {
        // Take Inputs 
    
    
    return 0;
}
