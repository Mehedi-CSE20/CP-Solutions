#include <iostream>
using namespace std;
 
#define fast   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
int main() {
    fast
    string s;
    cin >> s;
    int count{0};
    char curr;
    for (int i{0}; i < s.size(); i++) {
        if (s[i] != curr) {
            curr = s[i];
            count = 0;
            count++;
        } else {
            curr = s[i];
            count++;
        }
        if (count == 7) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}