#include<iostream>
// #include <string>
#include<algorithm>
using namespace std;
#define fastIO   ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
int main() {
    fastIO
    int32_t tc;
    cin >> tc;
    while (tc--) {
        int32_t n;
        cin >> n;
        int32_t arr[n+1]{0};
        for (int32_t i = 0; i < n; i++) {
            int32_t tmp;
            cin >> tmp;
            arr[tmp]++;
        }
        int32_t ans{-1};
        for (int32_t i = 0; i <= n; i++) {
            if (arr[i] >= 3) {
                ans = i;
            }
        }
        cout << ans << '\n';
    }
}