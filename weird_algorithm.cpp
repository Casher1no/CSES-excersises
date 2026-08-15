#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    cout << n << " ";
    while (n != 1){
        if (n % 2 == 0){
            n /= 2;
            cout << n << " ";
        }else{
            n *= 3;
            n += 1;
            cout << n << " ";
        }
    }
}
