#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
 
int main() {
    fast
    int a, b;
    cin >> a >> b;
    int ans{a};
    while (a >= b) {
        ans += a/b;
        a = (a/b)+(a%b);
    }
    cout << ans << nn;
}