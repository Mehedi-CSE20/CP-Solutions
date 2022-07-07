#include<iostream>
using namespace std;
#define ll long long
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
int compare(string s) {
    int ans{0};
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            ans++;
        }
    }
    if (ans == s.size()) return 1;
    else if ((ans == s.size()-1) && (s[0] >= 'a' && s[0] <= 'z')) return 1;
    else return 0;
}
 
string trans(string s) {
    if (s[0] >= 'a' && s[0] <= 'z') s[0] = toupper(s[0]);
    else if (s[0] >= 'A' && s[0] <= 'Z') s[0] = tolower(s[0]);
    for (int i{1}; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}
 
int main() {
    fastIO
    string s;
    cin >> s;
    if (compare(s)) cout << trans(s) << endl;
    else cout << s << endl;
}