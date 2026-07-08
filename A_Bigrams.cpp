#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        bool ans=false;
        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            if(x>=3){
                ans=true;
                // break;
            }
            if(x>=2){
                cnt++;
            }
            
        }

        if(ans || cnt>=2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}