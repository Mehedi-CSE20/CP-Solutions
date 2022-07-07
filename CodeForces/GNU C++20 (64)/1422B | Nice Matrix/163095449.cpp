#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn endl
#define prime 1000000007
#define read(_a, _n) for (ui i{0}; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define mx(_a) *max_element(_a.begin(), _a.end())
#define all(_a) _a.begin(), _a.end()
using namespace std;
#define ll long long
#define ull unsigned long long
#define ui unsigned ll
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
// Use M_PI for pi
 
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        ll n, m;
        cin >> n >> m;
        ll s[n][m];
        for (ll i{0}; i < n; i++)  {
            for (ll j{0}; j < m; j++) {
                cin >> s[i][j];
            }
        }
        ll ans{0};
        for (ll i{0}; i < n; i++) {
            for (ll j{0}; j < m; j++) {
                vector<ll> a{s[i][j], s[i][m-j-1], s[n-i-1][j], s[n-i-1][m-j-1]};
                sort(all(a));
                ans += abs(a[1] - s[i][j]);
            }
        }
        cout << ans << nn;
    }
}