#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                ans+=s[i];
            }
        }
        if(ans.empty() || s[n-1]!=ans.back()){ // better verz
            ans.push_back(s[n-1]);
        }
        if((ans=="10" || ans=="01")){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }

    }

}