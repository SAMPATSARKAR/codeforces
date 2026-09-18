#include<bits/stdc++.h>//correct
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int ans=v[0];
        for(int i=1;i<n;i++){
            ans^=v[i];
        }
        if(n%2!=0){
            cout<<ans<<endl;

        }else{
            if(ans==0){
                cout<<ans<<endl;
            }else{
                cout<<-1<<endl;
            }
        }

    }
}