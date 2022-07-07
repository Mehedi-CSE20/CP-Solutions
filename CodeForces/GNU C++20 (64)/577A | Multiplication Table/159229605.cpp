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
    ll n, x, cnt{0};
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        if (x%i == 0 && x/i <= n) cnt++;
    }
    cout << cnt << nn;
}