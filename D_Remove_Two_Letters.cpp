#include <iostream>
using namespace std;

#define int long long

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int ans = n - 1;

        for (int i = 0; i < n - 2; i++) {
            if (s[i] == s[i + 2]) {
                ans--;
            }
        }

        cout << ans << endl;
    }
}