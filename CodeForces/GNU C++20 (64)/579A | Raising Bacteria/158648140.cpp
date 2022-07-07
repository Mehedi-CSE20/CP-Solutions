#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
 
int main() {
    fast
    int x, cnt{0};
    cin >> x;
 
    // First time using bit shifting
    while (x) {
        cnt += x & 1;
        x >>= 1;
    }
    cout << cnt << endl;
}