#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;
    cin>>n;
    if(n == 7 || n==4){
        cout<<"NO"<<endl;
        return 0;
    }
    bool ans=false;
    while(n>0){
        int a = n%10;
        if(a!=7 && a!=4){
            ans=true;
            break;
        }
        n/=10;
    }
    if(ans){
        cout<<"NO"<<endl;
    }else{
        
        cout<<"YES"<<endl;
    }
}