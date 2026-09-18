#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x = n;
        int ans=0;
        if(x>=4){
            ans+=x/4;
            x=x/4;
        }
        if(x>=2){
            ans+=x/2;
            x/=2;
        }
        cout<<ans<<endl;
    }
}