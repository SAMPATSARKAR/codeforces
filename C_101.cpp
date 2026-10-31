#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            if(v[i]==-1) v[i]=1;
            if(v[i]==1) break;
        }
        for(int i=n-1;i>=0;i--){
            if(v[i]==-1) v[i]=1;
            if(v[i]==1) break;
        }
        for(auto &x:v)cout<<max(x,0)<<" ";
        cout<<endl;
    }

    return 0;
}