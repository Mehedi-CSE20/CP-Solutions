#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
 
int main() {
    fast
    int tc;
    cin >> tc;
    map<string, int> m;
    for (int i{0}; i < tc ; ++i) {
        string tmp;
        cin >> tmp;
        m[tmp]++;
    }
    (m.begin()->ss > m.crbegin()->ss) ? cout << (m.begin()->ff) << nn : cout << m.crbegin()->ff;
}
 
 
 
// Yes, bilashita ! Easy qus tai onno jong dhora method practice korsi