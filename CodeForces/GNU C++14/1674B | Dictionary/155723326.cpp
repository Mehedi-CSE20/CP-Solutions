#include<iostream>
using namespace std;
#define ll long long
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
int main() {
    fastIO
    ll tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;
        cout << (s[1]-'a')+((s[0]-'a')*25)+(s[0]>s[1]) << '\n';
    }
}