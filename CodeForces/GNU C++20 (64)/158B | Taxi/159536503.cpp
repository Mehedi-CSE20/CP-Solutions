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
    int n, cnt[4]{0}, ans{0};
    cin >> n;
    for (int i{0}; i < n; i++) {
        int temp;
        cin >> temp;
        cnt[temp%4]++;
    }
    // for (auto val : cnt) {
    //     cout << val << " ";
    // }
    // cout << nn;
    int z = ((cnt[2] % 2) ? cnt[2]/2+1 : cnt[2]/2) + ceil((max(cnt[1] - cnt[3], 0) - (cnt[2] % 2)*2)/4.0);
    ans = cnt[0] + cnt[3] + z;
    cout << ans << nn;
}