#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define mod 1000000007
using namespace std;
#define ll long long
#define ull unsigned long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
 
int main() {
    fast
    ll tc;
    cin >> tc;
    while (tc--) {
        ll n, h, sum{0};
        cin >> n >> h;
        ll a[n]{0};
        for (ll i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n, greater<ll>());
        if (h%(a[0] + a[1]) == 0) cout << 2 * (h/(a[0]+a[1])) << nn;
        else if (h%(a[0] + a[1]) <= a[0]) cout << 2 * (h/(a[0]+a[1])) + 1 << nn;
        else cout << 2 * (h/(a[0]+a[1])) + 2 << nn;
    }
}