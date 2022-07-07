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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int m;
        cin >> m;
        int b[m];
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        sort(a, a + n, greater<int>());
        sort(b, b + m, greater<int>());
        (a[0] >= b[0]) ? cout << "Alice\n" : cout << "Bob\n";
        (a[0] <= b[0]) ? cout << "Bob\n" : cout << "Alice\n";
    //     if (a[0] != b[0]) (a[0] > b[0]) ? cout << "Alice\nAlice\n" : cout << "Bob\nBob\n";
    //     else cout << "Alice\nBob\n";
    // }
    }
}