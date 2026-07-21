#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        string a1;
        cin>>a1;
        int a=0,b=0;
        for(int i=0;i<a1.size();i++){
            if(a1[i]=='0'){
                a++;
            }else{
                b++;
            }
        }
        if(min(a,b)%2==1) cout<<"DA"<<endl;
        else
            cout<<"NET"<<endl;
    }
}