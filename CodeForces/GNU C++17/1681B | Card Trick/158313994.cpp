#include<bits/stdc++.h>
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
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int m;
        cin >> m;
        int sum{0};
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            sum += x;
            sum %= n;
        }
        cout << a[sum] << '\n';
    }
}