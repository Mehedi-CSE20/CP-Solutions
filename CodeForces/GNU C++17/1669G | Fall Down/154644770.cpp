#include<iostream>
#include <string>
#include <set>
#include<algorithm>
using namespace std;
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
int main() {
    fastIO
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        char a[n][m]{0};
        for (int i{0}; i < n; i++) {
            for (int j{0}; j < m; j++) {
                cin >> a[i][j];
            }
        }
        for (int i{0}; i < m; i++) {
            int floor{n-1};
            for (int j{n-1}; j >= 0; j--) {
                // cmpr
                if (a[j][i] == 'o') {
                    floor = j-1;
                } else if (a[j][i] == '*') {
                    a[j][i] = '.';
                    a[floor][i] = '*';
                    floor--;
                }
            }
            // floor = n;
        }
        for (int i{0}; i < n; i++) {
            for (int j{0}; j < m; j++) {
                cout << a[i][j];
            }
            cout << '\n';
        }
        // cout << '\n';
    }
}