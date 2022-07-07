#include<iostream>
// #include <string>
// #include<algorithm>
using namespace std;
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
int main() {
    fastIO
    int tc;
    cin >> tc;
    while (tc--) {
        int x;
        cin >> x;
        if (x>= 1900) {
            cout << "Division 1" << '\n';
        } else if (x >=1600 && x <= 1899) {
            cout << "Division 2" << '\n';
        } else if (x >= 1400 && x <= 1599) {
            cout << "Division 3" << '\n';
        } else if (x <= 1399) {
            cout << "Division 4" << '\n';
        }
    }
 
}