#include<iostream>
#include<string>
using namespace std;
int main() {
    int n{0}, room[10]{0};
    cin >> n;
    string a;
    cin >> a;
    for (int i{0}; i < n; i++) {
        if (a[i] == 'L') {
            for (int j{0}; j < 10; j++) {
                if (room[j] == 0) {
                    room[j] = 1;
                    break;
                }
            }
        } else if (a[i] == 'R') {
            for (int j{0}; j < 10; j++) {
                if (room[9-j] == 0) {
                    room[9-j] = 1;
                    break;
                }
            }
        } else {
            room[a[i]-48] = 0;
        }
    }
    for (int i{0}; i < 10; i++) {
        cout << room[i];
    }
    cout << endl;
}