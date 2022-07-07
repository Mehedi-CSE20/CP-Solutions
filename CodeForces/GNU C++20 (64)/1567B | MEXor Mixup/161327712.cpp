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
    int sum{0};
    vector<int> s;
    for (int i{0}; i < 300001; i++) {
        sum ^= i;
        s.push_back(sum);
    }
    while (tc--) {
        int a, b;
        cin >> a >> b;
 
        if (s[a - 1] == b) cout << a << nn;
        else if ((s[a - 1] ^ b) != a) cout << a+1 << nn;
        else cout << a+2 << nn;
    }
}