#include<iostream>
using namespace std;
#define ll long long
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
int main() {
    fastIO
    int tc;
    cin >> tc;
    while (tc--) {
        int r, c;
        bool flag{false}, term{false};
        cin >> r >> c;
        int cr{0}, cc{0};
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                char temp;
                cin >> temp;
                if (temp == 'R' && flag == false) {
                    cr = i;
                    cc = j;
                    flag = true;
                }
                else if (temp == 'R' && flag == true && (i < cr || j < cc)) term = true;
            }
        }
        if (term == false) cout << "YES\n";
        else cout << "NO\n";
    }
}