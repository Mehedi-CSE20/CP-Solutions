#include<iostream>
 
using namespace std;
 
int main() {
    int a{0};
    cin >> a;
    for (int i{0}; i < a; i++) {
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        ((y - x) % (a + b) == 0) ? cout << (y - x) / (a + b)  << endl : cout << -1 << endl;
    }
    return 0;
}