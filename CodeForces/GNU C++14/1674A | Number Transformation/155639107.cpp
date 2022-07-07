#include<iostream>
using namespace std;
#define ll long long
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
int main() {
    fastIO
    ll tc;
    cin >> tc;
    while (tc--) {
        ll x, y;
        cin >> x >> y;
        if (y%x == 0) cout << 1 << " " << (y/x) << '\n';
        else cout << 0 << " " << 0 << '\n';
    }
}