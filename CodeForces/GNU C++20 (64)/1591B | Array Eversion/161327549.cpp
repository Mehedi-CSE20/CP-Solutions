#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define mod 1000000007
#define read(_a, _n) for (int i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define mx(_a) *max_element(_a.begin(), _a.end())
using namespace std;
#define ll long long
#define ull unsigned long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
 
int main() {
    fast
    int tc;
    cin >> tc;
    while (tc--) {
        int n, curr{0}, cnt{0};
        cin >> n;
        vector<int> x(n);
        read(x, n);
        // show(x);
        int max = mx(x);
        for (int i = n - 1; x[i] != max; i--) {
            if (x[i] > curr) ++cnt, curr = x[i];
        }
        cout << cnt << nn;
    }
}