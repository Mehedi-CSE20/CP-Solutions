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
        int n, m, sum{0};
        cin >> n >> m;
        int a[n]{0};
        for (int i{0}; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        cout << max(sum - m, 0) << nn;
    }
}