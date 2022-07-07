#include<iostream>
#include<vector>
#include<algorithm>
#define foi(a, b, c) for (ll c{(a)}; c < (b); c++)
#define fod(a, b, c) for (ll (c){(a)}; (c) < (b); (c)--)
#define ll int64_t
using namespace std;
 
 
int main() {
    int n{0};
    cin >> n;
    while (2*n--) {
        int a{0}, b{0};
        cin >> a >> b;
        if (a <= 2) {
            cout << 1 << endl;
            continue;
        }
        cout << ((a-3)/b)+2 << endl;
    }
}