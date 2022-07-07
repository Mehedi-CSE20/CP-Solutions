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
        int a, b;
        cin >> a >> b;
        int len = a + b;
        string s;
        for (int i{0}; i < len; i++) {
            if ((!(i&1) && b) || (!a && b)) s += '1', b--;
            else if (a) s += '0', a--;
        }
        cout << s << nn;
    }
}