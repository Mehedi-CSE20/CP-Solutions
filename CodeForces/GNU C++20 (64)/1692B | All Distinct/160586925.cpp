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
        set<int> s;
        int n{0};
        cin >> n;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            s.insert(a);
        }
        int x = n - s.size();
        cout << s.size() - ((x % 2) ? 1 : 0) << nn;
    }
}