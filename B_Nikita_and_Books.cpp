#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;

        vector<int> v(n);

        for(int i=0;i<n;i++) cin>>v[i];

        vector<int> pre(n+1,0);

        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+v[i];
        }
        bool ans=false;
        for(int i=1;i<=n;i++){

            if(pre[i]<i*(i+1)/2){
                ans=true;
                break;
            };

        }
        if(ans){
            cout<<"NO"<<endl;
        }else{

            cout<<"YES"<<endl;
        }
    }
}