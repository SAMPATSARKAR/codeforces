#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        string x;
        cin>>x;
        int n = x.size();
        if(n<=10){
            cout<<x<<endl;
        }else{
            cout<<x[0]<<n-2<<x[n-1]<<endl;
        }
    }
    return 0;
}