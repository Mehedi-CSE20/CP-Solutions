#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define mod 1000000007
using namespace std;
#define ll long long
#define ull unsigned long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
 
int main() {
    fast
    int x[10] = {4, 7, 74, 47, 774, 447, 474, 477, 747};
    int n;
    cin >> n;
    for (int i{0}; i < 9; i++) {
        if (!(n%x[i])) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}