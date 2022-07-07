#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0); cin.tie(0);
 
 
int main() {
    fast
    int tc;
    cin >> tc;
    int team[2]{0};
    string a, b;
    for (int i{0}; i < tc ; ++i) {
        string tmp;
        cin >> tmp;
        if (i == 0) a = tmp, team[0]++;
        else if (tmp == a) team[0]++;
        else b = tmp, team[1]++;
    }
    (team[0] > team[1]) ? cout << a << '\n' : cout << b << '\n';
}