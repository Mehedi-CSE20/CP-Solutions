#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define mod 1000000007
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
int main() {
    fast
    int n;
    cin >> n;
    int a[n+1]{0}, b[n]{-1};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == n - 1) b[i] = abs(a[n - 1] - a[0]);
        if (i > 0) b[i - 1] = abs(a[i - 1] - a[i]);
    }
    int l{0}, r{n-1}, ans{INT_MAX}, cord[2]{0};
    for (int i = 0; i < n; i++) {
        if ((b[i] < ans) && (i == n - 1)) {
            ans = b[i];
            cord[0] = n;
            cord[1] = 1;
        }
        if (b[i] < ans) {
            ans = b[i];
            cord[0] = i + 1;
            cord[1] = i + 2;
        }
    }
    cout << cord[0] << " " << cord[1] << nn;
}