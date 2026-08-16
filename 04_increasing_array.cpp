#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    long long output = 0;
    for (int i = 1; i < n; i++) {
        int previous = a[i - 1];
        int current = a[i];

        while(previous > current) {
            current++;
            output++;
        }
        a[i] = current;
    }

    cout << output;
}
