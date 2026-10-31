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
        string ans="";
        int n1=n;
        while(n1>0){
            int a = n1%2;
            ans+=('0'+a);
            n1=n1/2;
        }
        reverse(ans.begin(),ans.end());
        cout<<ans;
    }

    return 0;
}