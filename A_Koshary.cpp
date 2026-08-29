#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        if(a%2 == 0 && b%2 == 0){
            cout<<"YES"<<endl;
            continue;
        }

        int x = a%2;
        int y = b%2;
        if(abs(x-y) == 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    }
}