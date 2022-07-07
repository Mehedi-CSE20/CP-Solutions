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
        int n{0};
        cin >> n;
        vector<int> a(n);
        int fg{1};
        for (int i{0}; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i{1}; i < n; i++) {
            if (a[i] - a[i - 1] > 1) {
                fg = 0;
                break;
            }
        }
        (fg) ? cout << "YES" << nn : cout << "NO" << nn;
    }
}