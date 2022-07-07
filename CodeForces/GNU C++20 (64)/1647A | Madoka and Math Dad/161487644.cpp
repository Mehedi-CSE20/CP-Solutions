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
        int n, a[2] = {2, 1}, fg{0}, i{0};
        cin >> n;
        int bak = n, b[n]{0};
        while (bak > 0) {
            int tm = a[(i++)%2];
            bak -= tm;
            b[i] = tm;
            if (bak < 0) fg = 1;
        }
        if (fg) {
            i = 0;
            swap(a[0], a[1]);
            while (n > 0) {
                int tm = a[(i++)%2];
                n -= tm;
                cout << tm;
            }
        } else {
            for (int j{1}; j <= i; j++) cout << b[j];
        }
        cout << nn;
    }
}