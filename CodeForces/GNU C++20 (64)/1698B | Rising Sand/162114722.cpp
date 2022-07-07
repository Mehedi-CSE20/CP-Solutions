#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn endl
#define mod 1000000007
#define read(_a, _n) for (int i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define mx(_a) *max_element(_a.begin(), _a.end())
using namespace std;
#define ll long long
#define ull unsigned long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
#define LL long long
 
 
 
int main() {
    fast
    int tc;
    cin >> tc;
    while (tc--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        read(a, n);
        ll cnt{0}, excp{(n - 1)/2};
        for (int i{1}; i < n - 1; i++) if (a[i] > a[i - 1] + a[i + 1]) cnt++;
        if (m == 1) cout << excp << nn;
        else cout << cnt << nn;
    }
}