#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        vector<int> a;
        for(int i=0;i<n;i++){
            int x = v[i];
            // if(x==1){
            //     continue;
            // }
            int ans = (x*(x-1))/2;
            a.push_back(ans);
        }
        reverse(a.begin(),a.end());
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }cout<<endl;
    }
    return 0;
}