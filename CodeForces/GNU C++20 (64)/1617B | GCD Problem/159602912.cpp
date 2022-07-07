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
        int n, x{0};
        cin >> n;
        x = (n-1)/2;
        if (!(n % 2)) cout << "2 " << n - 3 << " 1\n";
        else if (!(x % 2)) cout << (x - 1) << " " << x + 1 << " 1\n";
        else cout << x - 2 << " " << x + 2 << " 1\n";
    }
}