#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define md 1000000007
#define read(_a, _n) for (ui i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define mx(_a) *max_element(_a.begin(), _a.end())
using namespace std;
#define ll long long
#define ui unsigned int
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
 
int main() {
    fast
    int n, tf{0}, fif{0};
    cin >> n;
    for (int i{0}; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp == 25) tf++;
        else if (temp == 50) fif++, tf--;
        else {
            if (fif > 0) tf--, fif--;
            else tf -= 3;
        }
        if (tf < 0) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}