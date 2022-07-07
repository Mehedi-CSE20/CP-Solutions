#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define mod 1000000007
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
 
ll get(vector<ll> &a, ll start) {
     for (ll i = start; ; i++) {
          bool find = true;
          for (ll j = 2; j*j <= i; j++) {
               if (!(i%j)) {
                    find = false;
                    break;
               }
          }
          if (find) {
               a.push_back(i);
               break;
          }
     }
}
 
int main() {
     fast
     ll t;
     cin >> t;
     while (t--) {
          ll n;
          cin >> n;
          vector<ll>a;
          get(a, n+1);
          get(a, a.back()+n);
          cout << min(a[0]*a[1], a[0]*a[0]*a[0]) << nn;
     }
}