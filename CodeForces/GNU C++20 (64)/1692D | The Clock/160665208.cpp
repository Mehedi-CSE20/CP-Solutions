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
        int tms[16] = {1272, 671, 951, 881, 1412, 1342, 1202, 811, 741, 601, 350, 280, 210, 140, 70, 0};
        char c;
        int hr, s, dis{0}, cnt{0};
        cin >> hr >> c >> s >> dis;
        hr = hr*60+s;
        int temp{hr};
        do {
            for (int i = 0; i < 16; i++) {
                if (hr == tms[i]) cnt++;
            }
        } while ((hr = (hr+dis) % 1440) != temp);
        cout << cnt << nn;
    }
}