#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn endl
#define mod 1000000007
#define read(_a, _n) for (ll i = 0; i < _n; i++) cin >> _a[i];
#define show(_a) for (auto &val : _a) cout << val << " ";
#define mx(_a) *max_element(_a.begin(), _a.end())
using namespace std;
#define ll long long
#define ull unsigned long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
int main() {
    fast
    int n;
    cin >> n;
    if (n&1)  cout << "9 " << (n - 9) << nn;
    else  cout << "8 " << (n - 8) << nn;
}