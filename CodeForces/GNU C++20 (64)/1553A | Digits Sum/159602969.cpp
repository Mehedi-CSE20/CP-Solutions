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
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (n/10 + (n%10 == 9 ? 1 : 0)) << nn;
    }
}