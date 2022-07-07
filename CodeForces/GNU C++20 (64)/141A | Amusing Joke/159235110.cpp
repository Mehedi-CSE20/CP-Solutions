#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 
int main() {
    string h, g, p, x;
    cin >> h >> g >> p;
    x = h + g;
    sort(x.begin(), x.end());
    sort(p.begin(), p.end());
    (x == p) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}