// K0dEr :P
 
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
        int n, idx;
        cin >> n;
        string s;
        cin >> s;
        if (s[0] == '?') {
            int t{0};
            while ((s[t] == '?') && (t < n)) t++;
            for (int i{t - 1}; i >= 0; i--) (s[i + 1] == 'R') ? s[i] = 'B' : s[i] = 'R';
        }
        for (int i{1}; i < n; i++) if (s[i] == '?') {(s[i - 1] == 'R') ? s[i] = 'B' : s[i] = 'R';}
        cout << s << "\n";
    }
}