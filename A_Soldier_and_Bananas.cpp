#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    for(int i=1;i<=c;i++){
        sum+=a*i;
    }
    if(sum>b){
        cout<<sum-b<<endl;
    }else{
        cout<<0<<endl;
    }
}