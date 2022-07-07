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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i{0}; i < n; i++) {
        cin >> a[i];
    }
    int cnt{1}, ans{0};
    for (int i{0}; i < n; i++) {
        if (i && a[i] >= a[i - 1]) cnt++;
        else cnt = 1;
        ans = max(ans, cnt);
    }
    cout << ans << nn;
}