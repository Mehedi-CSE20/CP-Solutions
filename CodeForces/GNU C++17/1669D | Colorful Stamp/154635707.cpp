#include<iostream>
#include <string>
#include<algorithm>
using namespace std;
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
int main() {
    fastIO
    int32_t tc;
    cin >> tc;
    while (tc--) {
        int32_t n, bcnt{0}, rcnt{0}, ans{0};
        cin >> n;
        string s;
        cin >> s;
        for (int i{0}; i < n; i++) {
            if (s[i] == 'B') {
                bcnt = 1;
            } else if (s[i] == 'R') {
                rcnt = 1;
            } else if (s[i] == 'W') {
                ans = max(ans, bcnt ^ rcnt);
                bcnt = rcnt = 0;
            }
            if (i+1 == n) {
                ans = max(ans, bcnt ^ rcnt);
                bcnt = rcnt = 0;
            }
        }
        if (ans) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}