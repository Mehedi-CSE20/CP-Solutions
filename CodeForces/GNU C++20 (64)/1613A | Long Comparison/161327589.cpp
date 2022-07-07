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
        string x[2];
        int y1, y2;
        cin >> x[0] >> y1 >> x[1] >> y2;
        int s1 = x[0].size(), s2 = x[1].size();
        if (s1 + y1 == s2 + y2) {
            int idx = (s1 > s2) ? 1 : 0;
            int t{abs(s1 - s2)};
            while (t--) x[idx] += '0';
            if (x[0] > x[1]) cout << ">\n";
            else if (x[0] < x[1])  cout << "<\n";
            else cout << "=\n";
        } else {
            if (s1+y1 > s2+y2)  cout << ">\n";
            else if (s1+y1 < s2+y2) cout << "<\n";
            else cout << "=\n";
        }
    }
}