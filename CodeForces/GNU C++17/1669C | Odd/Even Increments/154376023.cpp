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
        int32_t arr[n+1]{0}, even[n+1]{0}, odd[n+1]{0};
        for (int32_t i = 1; i <= n; i++) {
            cin >> arr[i];
            if (i%2 == 0) {
                even[i] = arr[i]+1;
                odd[i] = arr[i];
            } else if (i%2 == 1) {
                odd[i] = arr[i]+1;
                even[i] = arr[i];
            }
        }
        int32_t cev[n+1]{0}, cod[n+1]{0};
        for (int32_t i = 1; i <= n; i++) {
            // cout << i << " Even " << even[i] << ' ' << odd[i] << " Normal " << arr[i] << '\n';
            if (even[i]%2 == 0) {
                cev[0]++;
            } else if (even[i]%2 == 1) {
                cod[0]++;
            }
            if (odd[i]%2 == 0) {
                cev[1]++;
            } else if (odd[i]%2 == 1) {
                cod[1]++;
            }
            if (arr[i]%2 == 0) {
                cev[2]++;
            } else if (arr[i]%2 == 1) {
                cod[2]++;
            }
        }
        // cout << '\n';
        if (cev[0] == n || cod[0] == n || cev[1] == n || cod[1] == n || cev[2] == n || cod[2] == n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}