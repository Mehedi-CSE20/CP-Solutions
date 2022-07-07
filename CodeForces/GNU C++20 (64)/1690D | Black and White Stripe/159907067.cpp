#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define mod 1000000007
using namespace std;
#define ll long long
#define ull unsigned long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
 
int main() {
    fast
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k, cnt{0};
        cin >> n >> k;
        string s;
        cin >> s;
        int a[n+1]{0};
        for (int i{0}; i < n; i++) a[i+1] = s[i] == 'W', a[i+1] += a[i];
        int ans{INT_MAX};
        for (int i{k}; i <= n; i++) ans = min(ans, abs(a[i] - a[i-k]));
        cout << ans << nn;
    }
}