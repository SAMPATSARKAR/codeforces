#include <bits/stdc++.h>
using namespace std;
int root(int x){
    while(x%2==0){
        x/=2;
    }
    return x;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n+1);
        for(int i=1;i<=n;i++) cin>>v[i];
        bool ans=true;
        for(int i=1;i<=n;i++){
            if(root(i)!=root(v[i])){
                ans=false;
                break;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}