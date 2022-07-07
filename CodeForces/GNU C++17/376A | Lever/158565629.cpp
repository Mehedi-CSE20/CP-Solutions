#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
 
int main() {
    fast
    string s;
    cin >> s;
    ll p = s.find('^'), ans{0};
    for (int i{0}; i < s.size(); i++) {
        if (s[i] >= '1' && s[i] <= '9') {
            ans += (s[i] - '0')*(p-i);
        }
    }
    if (!ans) cout << "balance\n";
    else if (ans > 0) cout << "left\n";
    else cout << "right\n";
}