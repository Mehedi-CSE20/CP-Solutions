#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
#define ll long long
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
int main() {
    fastIO
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        if (n == 1) {
            cout << 0 << '\n';
            continue;
        }
        sort(a.begin(), a.end());
        if (a[0] == a[n-1]) {
            cout << 0 << '\n';
            continue;
        }
        int ans = 0;
        for (int i = 1; i < n; i++) {
            ans += abs(a[i] - a[0]);
        }
        cout << ans << '\n';
    }
}