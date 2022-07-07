#include<iostream>
#include <algorithm>
 
using namespace std;
 
int gcomp(string g) {
    string gene = "ACTG";
    int total = 0;
    for (int i{0}; i <= 4; i++) {
        g[i] = abs(g[i] - gene[i]);
        g[i] = (26-g[i] < g[i]) ? 26-g[i] : g[i];
        total += g[i];
    }
    return total;
}
 
int main() {
    int a{0};
    cin >> a;
    string g;
    cin >> g;
    string gene = "ACTG";
    int total = 1000000;
    if (a == 4) {
        total = gcomp(g);
    } else {
        for (int i{0}; i < a-3; i++) {
            int temp = gcomp(g.substr(i, 4));
            if (temp < total) {
                total = temp;
            }
        }
    }
    cout << total << endl;
    return 0;
}