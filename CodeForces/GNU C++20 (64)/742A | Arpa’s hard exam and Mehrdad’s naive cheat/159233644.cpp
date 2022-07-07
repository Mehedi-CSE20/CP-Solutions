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
    ll n;
    int x[4] = {6, 8, 4, 2};
    cin >> n;
    if (n == 0) cout << 1 << nn;
    else cout << x[n%4] << nn;
}