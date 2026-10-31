#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        int ans = max(abs(a-b),(a+c)-b);
        cout<<ans<<endl;
    }

    return 0;
}