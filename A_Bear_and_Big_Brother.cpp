#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int a,b;
    cin>>a>>b;
    int count=0;
    while(a<=b){
        a*=3;
        b*=2;
        count++;
    }
    cout<<count<<endl;
}