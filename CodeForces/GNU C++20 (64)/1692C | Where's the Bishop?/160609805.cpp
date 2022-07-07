#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define mod 1000000007
#define read(_a, _n) for (int i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define mx(_a) *max_element(_a.begin(), _a.end())
using namespace std;
#define ll long long
#define ull unsigned long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
 
int main() {
    fast
    int tc;
    cin >> tc;
    while (tc--) {
        string s[8];
        for (int i = 0; i < 8; i++) {
            cin >> s[i];
        }
        int fg{0}, cord[2]{0};
        for (int i = 0; i < 8; i++) {
            int cnt{0};
            for (int j = 0; j < 8; j++) {
                if (s[i][j] == '#') {
                    cnt++;
                    cord[0] = i;
                    cord[1] = j;
                }
                if (cnt == 2) fg = 1;
            }
            if (fg && cnt == 1) break;
        }
        cout << cord[0]+1 << " " << cord[1]+1 << nn;
    }
}