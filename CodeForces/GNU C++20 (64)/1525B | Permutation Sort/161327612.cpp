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
        int n;
        cin >> n;
        vector<int> a(n), x(n);
        read(a, n);
        x = a;
        sort(x.begin(), x.end());
        if (x[0] == a[0]) {
            if (x == a) cout << "0\n";
            else cout << "1\n";
        } else if (a[n - 1] == x[0]) {
            if (a[0] == x[n - 1]) cout << "3\n";
            else cout << "2\n";
        } else {
            if (x[n - 1] == a[n - 1]) cout << "1\n";
            else cout << "2\n";
        }
    }
}