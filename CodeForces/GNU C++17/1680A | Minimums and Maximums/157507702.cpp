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
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if (l2 <= r1) {
            if (l1 <= l2) cout << l2 << endl;
            else if (r2 >= l1) cout << l1 << endl;
            else cout << l1+l2 << endl;
        }
        else cout << l1+l2 << '\n';
    }
}