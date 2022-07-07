#include<iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        int32_t cnt{0};
        cin >> s;
        if (s[s.size()-1] != 'B') {
            cout << "NO\n";
            continue;
        }
        // cout << s << '\n';
        bool flg{1};
        for (auto ch : s) {
            (ch == 'A') ? cnt++ : cnt--;
            if (cnt < 0) flg = 0;
        }
        (flg)? cout << "YES\n": cout << "NO\n";
    }
}