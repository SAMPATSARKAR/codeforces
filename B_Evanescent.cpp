#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        // Original compressed length
        int compressed = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                compressed++;
            }
        }

        // Maximum reduction from ONE deletion
        int reduction = 0;

        for (int i = 1; i < n - 1; i++) {

            // s[i] must be its own group
            if (s[i - 1] != s[i] && s[i] != s[i + 1]) {

                if (s[i - 1] == s[i + 1]) {//aba
                    reduction = max(reduction, 2LL);
                } else {                   //abc
                    reduction = max(reduction, 1LL);
                }
            }
        }

        cout << compressed - reduction << '\n';
    }
}