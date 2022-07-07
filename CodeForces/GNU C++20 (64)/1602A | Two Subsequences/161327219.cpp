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
        string s;
        cin >> s;
        int idx{0};
        char min{'z'};
        for (int i{0}; i < s.size(); i++) {
            if (s[i] < min) {
                min = s[i];
                idx = i;
            }
        }
        cout << min << " " << s.substr(0, idx) << s.substr(idx+1) << nn;
    }
}