#include<iostream>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int ind=0;
        for(int i =0;i<s.size();i++){
            if(s[i]=='?'){
                if(ind<t.size()){
                    s[i]=t[ind];
                    ind++;
                }else{
                    s[i]='z';
                }
            }else{
                if(s[i]==t[ind]){
                    ind++;
                }
            }
        }
        if(ind == t.size()){
            cout<<"Yes"<<endl;
            cout<<s<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}