#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define mod 1000000007
#define read(_a, _n) for (ll i = 0; i < _n; i++) cin >> _a[i];
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
        string a[2];
        cin >> a[0] >> a[1];
        int a1 = a[0].size(), a2 = a[1].size();
        int fg{0};
        for (int i = a1; i > 0; i--) {
            for (int j = 0; j < (a1 - i + 1); j++) {
                if (a[1].find(a[0].substr(j, i)) != string::npos) {cout << (a1+a2-2*i) << nn; fg = 1; break;}
            }
            if (fg) break;
        }
        if (!fg) cout << a1+a2 << nn;
    }
}