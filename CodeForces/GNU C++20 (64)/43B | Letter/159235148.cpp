#include<iostream>
#include<algorithm>
#include<string>
#define rep(a, b) for (int i{(a)}; i < (b); i++)
#define ret(a, b, c) for (int (c){(a)}; (c) < (b); (c)++)
#define ll int64_t
using namespace std;
 
 
int main() {
    string s1, s2;
    getline(cin, s1);
    s1.erase(std::remove(s1.begin(), s1.end(), ' '), s1.end());
    getline(cin, s2);
    s2.erase(std::remove(s2.begin(), s2.end(), ' '), s2.end());
    int count = 0;
    rep(0, s1.size()) {
        ret(0, s2.size(), j) {
            if (s1[i] == s2[j] && s2[j] != '+') {
                s2[j] = '+';
                s1[i] = '-';
                count++;
            }
        }
    }
    // cout << count << " " << s2.size() << endl;
    if (count == s2.size()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}