#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<int> v(3);
        for(int i=0;i<3;i++){
            int x;cin>>x;
            v[i]=x;
        }
        int mn = *min_element(v.begin(),v.end());
        cout<<n-mn<<endl;
    }

    return 0;
}