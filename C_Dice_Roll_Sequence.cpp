#include <bits/stdc++.h>
using namespace std;

bool adjacent(int x, int y) {
    // Same side OR opposite side => not adjacent
    if (x == y) return false;
    if (x + y == 7) return false;

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int &x : a)
            cin >> x;

        // dp[x] = minimum changes so far
        // if the current element is x
        vector<int> dp(7, 1e9);

        // First element
        for (int x = 1; x <= 6; x++) {
            dp[x] = (a[0] != x);
        }

        // Remaining elements
        for (int i = 1; i < n; i++) {

            vector<int> ndp(7, 1e9);

            for (int x = 1; x <= 6; x++) {

                // We want a[i] to become x
                int cost = (a[i] != x);

                for (int prev = 1; prev <= 6; prev++) {

                    if (adjacent(prev, x)) {
                        ndp[x] = min(ndp[x],
                                     dp[prev] + cost);
                    }
                }
            }

            dp = ndp;
        }

        // int ans = *min_element(dp.begin() + 1, dp.end());

        cout << ans << '\n';
    }

    return 0;
}