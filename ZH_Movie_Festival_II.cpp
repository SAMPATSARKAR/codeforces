#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;cin>>n;
    int m;cin>>m;
    vector<pair<int,int>> vp;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        vp.push_back({x,y});
    } 
    sort(vp.begin(),vp.end(),[&](auto a, auto b){
        return a.second<b.second;
    });
    


}