#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int mx = *max_element(v.begin(),v.end());
        int count=0;
        for(int i=0;i<n;i++){
            if(v[i]==mx){
                count++;
            }
        }
        cout<<count<<endl;
    }
}