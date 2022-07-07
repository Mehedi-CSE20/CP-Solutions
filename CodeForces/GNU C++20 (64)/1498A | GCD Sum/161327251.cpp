#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define mod 1000000007
using namespace std;
#define ll long long
#define ull unsigned long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
ll dg(ll n) {
    ll sum{0};
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
 
int main() {
    fast
    ll tc;
    cin >> tc;
    while (tc--) {
        ll n;
        cin >> n;
        while (__gcd(n, dg(n)) == 1) {
            n++;
        }
        cout << n << nn;
    }
}