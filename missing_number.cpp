#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n;
    cin >> n;
    vector<ll> a(n - 1);
    for (auto &x : a) cin >> x;
 
    sort(a.begin(), a.end());
 
    int reverseKey = 0;
    for (ll i = 1; i <= n; i++) {
        if (i != a[i - 1 - reverseKey]){
            cout << i;
            reverseKey++;
        }
    }
}
