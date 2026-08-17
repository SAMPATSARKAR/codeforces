#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        int count=0;
        int mx=0;
        for(auto x:a){
            if(x == '#'){
                count++;
                mx=max(mx,count);
            }else{
                count=0;
            }
        }
        int ans = (mx + 2 -1)/2;
        cout<<ans<<endl;
    }
}