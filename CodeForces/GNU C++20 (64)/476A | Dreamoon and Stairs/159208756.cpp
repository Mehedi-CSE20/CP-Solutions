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
    int n, m;
    cin >> n >> m;
    if (m > n) cout << "-1\n";
    else cout << ((((n+1)/2)+m-1)/m)*m << nn;
}