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
        vector<int> a(n), b(n), c;
        for (int i{0}; i < n; i++) cin >> a[i];
        for (int i{0}; i < n; i++) cin >> b[i];
        int maxDif{-1}, idxDif{-1}, flag{0};
        for (int i{0}; i < n; i++) {
            if (a[i] < b[i]) {flag = 1; break;}
            if (!b[i]) maxDif = max(maxDif, a[i]);
            else {
                if (!(idxDif+1)) idxDif = a[i] - b[i];
                else if (idxDif != a[i] - b[i]) flag = 1;
            }
        }
        (flag || (idxDif < maxDif) * (idxDif+1)) ? cout << "NO\n": cout << "YES\n";
    }
}