#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans = accumulate(v.begin(),v.end(),~0,std::bit_and<int>());
        cout<<ans<<endl;
    }
}