#include<iostream>
 
using namespace std;
 
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;
        int first = 0, second = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i < 3) {
                first += s[i];
            } else {
                second += s[i];
            }
        }
        if (first == second) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}