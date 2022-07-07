#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn endl
#define mod 1000000007
#define read(_a, _n) for (ll i = 0; i < _n; i++) cin >> _a[i];
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
        ll n, z;
        cin >> n >> z;
        vector<ll> a(n);
        for (int i{0}; i < n; i++) {
            ll tmp;
            cin >> tmp;
            if (tmp < (tmp | z)) a[i] = (tmp | z);
            else a[i] = tmp;
        }
        cout << *max_element(a.begin(), a.end()) << nn;
    }
}