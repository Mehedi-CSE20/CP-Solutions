#include<iostream>
using namespace std;
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
int main() {
    fastIO
    int tc{0};
    cin >> tc;
    while (tc--) {
        int r{0}, c{0}, ans{0};
        cin >> r >> c;
        int m = max(r, c);
        int n = min(r, c);
        if ((r > 2 && c == 1) || (c > 2 && r == 1)) {
            cout << -1 << '\n';
            continue;
        }
        if ((r+c)%2 == 0)
            cout << max(0, 2*m-2) << '\n';
        else
            cout << max(0, (n-1)*2+((m-n-1)*2)+1) << '\n';
    }
}