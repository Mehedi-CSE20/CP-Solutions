#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define mod 1000000007
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
bool prime(int n) {
    if (n == 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
 
 
int main() {
    fast
    int t;
    cin >> t;
    while (t--) {
        int n;
        bool flag = false;
        string a;
        cin >> n >> a;
        for (int i = 0; i < n; i++) {
            if (!prime(a[i] - '0')) {
                cout << "1\n" << a[i] << nn;
                flag = true;
                break;
            }
        }
        if (flag) continue;
        flag = false;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (!prime((a[i] - '0') * 10 + (a[j] - '0'))) {
                    cout << "2\n" << a[i] << a[j] << nn;
                    flag = true;
                    break;
                }
            }
            if (flag) break;
        }
    }
}