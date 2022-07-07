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
    int n, k, cnt{0};
    cin >> n >> k;
    vector<int> a(n);
    for (int i{0}; i < n; i++) {
        cin >> a[i];
    }
    for (int i{0}; i < n; i++) {
        if (a[i] >= a[k - 1] && a[i] != 0) cnt++;
    }
    cout << cnt << nn;
}