#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v1(n);
        vector<int> v2(n);

        for (int i = 0; i < n; i++) {
            cin >> v1[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> v2[i];
        }

        vector<int> prev1(n + 1, 0);
        vector<int> prev2(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            prev1[i] = prev1[i - 1] + v1[i - 1];
        }

        for (int i = 1; i <= n; i++) {
            prev2[i] = prev2[i - 1] + v2[i - 1];
        }

        bool check = true;

        for (int i = 1; i <= n; i++) {
            if (prev1[i] > prev2[i]) {
                check = false;
                break;
            }
        }

        if (check) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}