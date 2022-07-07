#include<iostream>
#define foi(a, b, c) for (ll c{(a)}; c < (b); c++)
#define fod(a, b, c) for (ll (c){(a)}; (c) < (b); (c)--)
#define ll int64_t
using namespace std;
 
 
int main() {
    int n{0};
    cin >> n;
    while (n--) {
        int a{0}, b{0};
        cin >> a >> b;
        foi(0, a, i) {
            if (a <= 2) {
                cout << 1 << endl;
                break;
            }
            if (a >= i*b+3 && a <= (i+1)*b+2) {
                cout << i+2 << endl;
                break;
            }
        }
    }
}