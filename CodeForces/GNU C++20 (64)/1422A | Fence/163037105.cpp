#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define prime 1000000007
#define read(_a, _n) for (ui i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define mx(_a) *max_element(_a.begin(), _a.end())
#define all(_a) _a.begin(), _a.end()
using namespace std;
#define ll long long
#define ull unsigned long long
#define ui unsigned ll
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
// Use M_PI for pi
 
 
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(all(v));
        cout << (v[2] - (v[1] - v[0])) << nn;
    }
}