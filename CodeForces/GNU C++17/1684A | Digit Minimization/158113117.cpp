#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s.size() == 2) cout << s[1] << '\n';
        else {
            sort(s.begin(), s.end());
            cout << s[0] << '\n';
        }
    }
}