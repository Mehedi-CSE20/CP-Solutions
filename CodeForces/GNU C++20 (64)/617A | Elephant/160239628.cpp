#include<iostream>
#include<cmath>
#define ff first
#define ss second
#define nn '\n'
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
int main() {
    fast
    int x;
    cin >> x;
    if (x <= 5) cout << 1 << '\n';
    else cout << ceil(x/5.0) << '\n';
}