#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    // vector<int> pre(n+1);
    // pre[0]=0;
    // for(int i=1;i<n+1;i++){
    //     pre[i]=pre[i-1]+i*5;
    // }
    int tt=240;
    int count=0;
    for(int i=1;i<=n;i++){
        t += (i*5);
        if((t)<=tt){
            count++;
        }
    }
    cout<<count<<endl;
}