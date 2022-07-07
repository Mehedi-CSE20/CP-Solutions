#include <iostream>
using namespace std;
 
#define fast   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
int main() {
    fast
    int tc;
    cin >> tc;
    while (tc--) {
    int64_t n, ans{0}, cnt[13][13]{{0}};
    cin >> n;
    for (int i{0}; i < n; i++) {
        string s;
        cin >> s;
        for (int j{0}; j < 13; j++) {
            if (j == s[0]-'a') continue;
            else ans += cnt[j][s[1]-'a'];
        }
        for (int j{0}; j < 13; j++) {
            if (j == s[1]-'a') continue;
            else ans += cnt[s[0]-'a'][j];
        }
        ++cnt[s[0]-'a'][s[1]-'a'];
    }
    cout << ans << '\n';
    }
}