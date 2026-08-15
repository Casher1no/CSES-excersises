#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin >> n;

    std::transform(n.begin(), n.end(), n.begin(), ::tolower);

    int l = n.length();
    int count = 0;
    int max = 0;
    char c = '\0';

    for (int i = 0; i < l; i++) {
        char x = n[i];
        if (c != x) {
            count = 1;
            c = x;
        } else {
            count++;
        }

        if (count > max) {
            max = count;
        }
    }

    cout << max;
}
