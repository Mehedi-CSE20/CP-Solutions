// K0dEr :P
 
#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define mod 1000000007
#define read(_a, _n) for (ll i = 0; i < _n; i++) cin >> _a[i];
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
        int n, m;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i) a[i] += a[i - 1];
        }
        cin >> m;
        vector<int> b(m);
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            if (i) b[i] += b[i - 1];
        }
        cout << max(0, *max_element(a.begin(), a.end())) + max(0, *max_element(b.begin(), b.end())) << nn;
    }
}