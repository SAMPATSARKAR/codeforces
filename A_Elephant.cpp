#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n,count=0;
    cin>>n;
    if(n%5!=0){
        count++;
    }
    n/=5;
    cout<<n+count<<endl;
}