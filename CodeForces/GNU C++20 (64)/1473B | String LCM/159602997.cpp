#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define mod 1000000007
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
 
int main() {
    fast
    ll t;
    cin >> t;
    while (t--) {
        string a, b , c, d;
        cin >> a >> b;
        int x = lcm(a.size(), b.size())/ a.size();
        int y = lcm(a.size(), b.size())/ b.size();
        for (int i = 0; i < x; i++) {
            c += a;
        }
        for (int i = 0; i < y; i++) {
            d += b;
        }
        if (c != d) {
            cout << "-1\n";
        } else {
            cout << c << nn;
        }
    }
 
}