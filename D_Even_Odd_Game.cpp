#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        int sum1=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(v[i]%2==0){
                    sum1+=v[i];
                }
            }else{
                if(v[i]%2!=0){
                    sum1-=v[i];
                }
            }
        }
        if(sum1>0) cout<<"Alice"<<endl;
        else if(sum1<0) cout<<"Bob"<<endl;
        else cout<<"Tie"<<endl;
    }
}