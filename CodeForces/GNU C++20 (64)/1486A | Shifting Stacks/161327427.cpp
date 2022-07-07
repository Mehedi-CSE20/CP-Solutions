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
        int n;
        cin >> n;
        ll a[n]{0}, sum{0};
        bool flag = 1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (sum < (i * (i + 1)) / 2) flag = 0;
        }
        (flag) ? cout << "YES\n" : cout << "NO\n";
    }
}