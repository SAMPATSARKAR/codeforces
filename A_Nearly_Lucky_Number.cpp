#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int n;
    cin >> n;

    int cnt = 0;

    while (n > 0) {
        int d = n % 10;
        if (d == 4 || d == 7)
            cnt++;
        n /= 10;
    }

    if (cnt == 4 || cnt == 7)
        cout << "YES\n";
    else
        cout << "NO\n";
}