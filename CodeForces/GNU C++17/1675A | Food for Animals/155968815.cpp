#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
int main() {
    fastIO
    int tc;
    cin >> tc;
    while (tc--) {
        ll a, b, c, x, y, xrem{0}, yrem{0};
        cin >> a >> b >> c >> x >> y;
        xrem = (a-x);
        yrem = (b-y);
        if (xrem >= 0 && yrem >= 0) {
            cout << "YES\n";
            continue;
        }
        if (xrem < 0) {
            c += xrem;
        }
        if (yrem < 0) {
            c += yrem;
        }
        if (c >= 0) {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
}