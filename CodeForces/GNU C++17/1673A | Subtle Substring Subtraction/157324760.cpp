#include<bits/stdc++.h>
using namespace std;
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
int main() {
    fastIO
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;
        int size = s.size(), ans{0};
        if (size == 1) {
            cout << "Bob " << s[0] - 'a' + 1 << '\n';
            continue;
        }
        // sort(s.begin(), s.end(), greater<char>());
        for (int i = 0; i < size; i++) ans += (s[i] - 'a' + 1);
        if (size % 2)
            (ans - (2*(s[size-1] - 'a' + 1)) > ans - (2*(s[0] - 'a' + 1))) ? cout << "Alice " << ans - (2*(s[size-1] - 'a' + 1)) << '\n' : cout << "Alice " << ans - (2*(s[0] - 'a' + 1)) << '\n';
        else cout << "Alice " << ans << '\n';
    }
}