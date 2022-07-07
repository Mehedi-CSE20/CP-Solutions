#include<bits/stdc++.h>
#define ff first
#define ss second
#define nn '\n'
#define mod 1000000007
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
vector<int> a;
 
void divisor(int n) {
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            a.push_back(i);
            if (i * i != n) a.push_back(n / i);
        }
    }
}
 
int main() {
    fast
    ll t;
    cin >> t;
    vector<int> arr;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        arr.push_back(n);
    }
    sort(arr.begin(), arr.end(), greater<int>());
    cout << arr[0] << " ";
    divisor(arr[0]);
    for (int i{0}; i < a.size(); i++) {
        arr.erase(find(arr.begin(), arr.end(), a[i]));
    }
    cout << arr[0];
    cout << nn;
    return 0;
}