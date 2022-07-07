#include<iostream>
#include <string>
#include<algorithm>
using namespace std;
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
int main() {
    fastIO
    int64_t tc;
    cin >> tc;
    while (tc--) {
        int64_t n;
        cin >> n;
        int64_t arr[n+1];
        for (int64_t i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int64_t i{0}, j{n-1}, ans{0}, a{arr[0]}, b{arr[n-1]};
        while (i < j) {
            // cout << "a " << i << " -> " << a << " b " << j << " -> " << b << '\n';
            if (a == b) {
                ans = max(ans, i+1+n-j);
            }
            if (a < b) {
                i++;
                a += arr[i];
            } else if (a >= b) {
                j--;
                b += arr[j];
            }
        }
        cout << ans << '\n';
    }
}