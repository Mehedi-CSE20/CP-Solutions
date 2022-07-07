#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
 
 
ll lower_bound(vector<ll> &arr, ll X)
{
    ll mid;
    ll low = 0;
    ll high = arr.size() - 1;
 
    if (arr[high] < X) return -2;
    if (arr[low] >= X) return 0;
 
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == X) return mid;
        if (X < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    if ((low < arr.size() - 1) && arr[low] < X) {
       low++;
    }
    return low;
}
 
int main() {
    fastIO
    ll tc;
    cin >> tc;
    while (tc--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> arr;
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end(), greater<ll>());
 
        vector<ll> psum;
        ll curr = 0;
        for (ll i = 0; i < n; i++) {
            curr += arr[i];
            psum.push_back(curr);
        }
 
        while (q--) {
            ll x;
            cin >> x;
            cout << lower_bound(psum, x)+1 << '\n';
 
        }
    }
}