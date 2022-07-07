#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
int main() {
    fastIO
    int tc;
    cin >> tc;
    while (tc--) {
        // string s;
        // cin >> s;
        // string t = s;
        // sort(t.begin(), t.end());
        // if (s.size() > 2) cout << t[0] << '\n';
        // else if (s.size() <= 2 && t != s) cout << s << endl;
 
        // 2nd method (Number, !string)
        int n, ans{INT_MAX};
        cin >> n;
        if (n < 100) cout << n%10 << '\n';
        else {
            while (n) {
                ans = min(n%10, ans);
                n /= 10;
            }
            cout << ans << '\n';
        }
    }
}