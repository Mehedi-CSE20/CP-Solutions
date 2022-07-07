#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
 
int main() {
    fast
    string s, sub, h = "hello";
    int cnt{0};
    cin >> s;
    for (int i{0}; i < h.size(); i++) {
        if (s.find(h[i]) != string::npos) s = s.substr(s.find(h[i])+1), cnt++;
    }
    (cnt == 5) ? cout << "YES\n" : cout << "NO\n";
}