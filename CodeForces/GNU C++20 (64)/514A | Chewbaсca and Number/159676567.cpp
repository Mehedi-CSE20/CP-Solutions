#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define mod 1000000007
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
 
 
int main() {
    fast
    ll n;
    vector<ll> a;
    cin >> n;
    while (n) {
        ll ans{min(n%10, 9 - (n%10))};
        a.push_back(ans);
        n /= 10;
    }
    bool flag = 0;
    for (ll i = a.size() - 1; i >= 0 ; i--) {
        if (a[i] == 0 && (i == a.size() - 1)) a[i] = 9;
        if (a[i] > 0) flag = 1;
        if (flag) cout << a[i];
    }
    cout << nn;
}