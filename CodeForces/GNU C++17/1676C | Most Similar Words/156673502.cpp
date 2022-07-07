#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
 
int compare(string s1, string s2) {
    int count{0};
    for (int i = 0; i < s1.size(); i++) {
        count += abs(s1[i] - s2[i]);
    }
    return count;
}
 
int main() {
    fastIO
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        string s[n];
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                    ans = min(ans, compare(s[i], s[j]));
            }
        }
        cout << ans << '\n';
    }
}