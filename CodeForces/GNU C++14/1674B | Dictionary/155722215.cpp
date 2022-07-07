#include<iostream>
using namespace std;
#define ll long long
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
int main() {
    fastIO
    ll tc;
    cin >> tc;
    string st[651];
    int y{1};
    for (char i{'a'}; i <= 'z'; i++) {
        int z{0};
        for (char j{'a'}; j <= 'z'; j++) {
            if (i == j) continue;
            st[y+z] = i;
            st[y+z] += j;
            y++;
        }
        z++;
    }
    while (tc--) {
        string s;
        cin >> s;
        for (int i{0}; i < 651; i++) {
            if (st[i] == s) {
                cout << i << '\n';
                break;
            }
        }
    }
}