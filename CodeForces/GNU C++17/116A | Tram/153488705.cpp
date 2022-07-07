#include<iostream>
#include<cmath>
using namespace std;
#define fastIO        ios_base::sync_with_stdio(0);cin.tie(nullptr);
 
int main() {
    fastIO;
    int tc{0};
    cin >> tc;
    int ans{0}, count{0};
    while (tc--) {
        int in{0}, out{0};
        cin >> out >> in;
        if (in == out) continue;
        count = in + abs(count-out);
        ans = max(ans, count);
    }
    cout << ans << '\n';
}