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
        int n, l, sum{0};
        cin >> n >> l;
        vector<int> a(n), bits(l);
        for (int i{0}; i < n; i++) cin >> a[i];
        for (int i{0}; i < n; i++) {
            for (int j{0}; j < l; j++) {
                if (a[i] & (1 << j)) bits[j]++;
            }
        }
        for (int i{0}; i < l; i++) {
            if (bits[i]*2 > n) sum |= (1 << i);
        }
        cout << sum << nn;
 
    }
}