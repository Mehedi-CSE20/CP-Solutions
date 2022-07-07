#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn endl
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
    string mat[2]{"0011", "1100"};
    while (tc--) {
        int n, m;
        cin >> n >> m;
        int rw{0};
        for (int i{0}; i < n; i++) {
            int col{1};
            for (int j{0}; j < m; j++) {
                int x = (j + col)%4;
                if (i == 0) cout << mat[0][x] << " ";
                else if ((rw%4) < 2) cout << mat[1][x] << " ";
                else cout << mat[0][x] << " ";
            }
            col = 0;
            if (i) rw++;
            cout << nn;
        }
    }
}