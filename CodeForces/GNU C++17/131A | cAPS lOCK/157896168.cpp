#include<iostream>
using namespace std;
#define ll long long
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
int compare(string &s) {
    string t = s;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {s = t; return 0;}
        s[i] = tolower(s[i]);
    }
    return 1;
}
 
int main() {
    fastIO
    string s;
    cin >> s;
    if (compare(s)) ((s[0] >= 'a' && s[0] <= 'z') ? s[0] = toupper(s[0]) : s[0] = tolower(s[0])), cout << s << '\n';
    else cout << s << '\n';
}