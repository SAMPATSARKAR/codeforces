#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;
    cin>>n;
    vector<pair<int,int>> vp;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        vp.push_back({x,y});
    }
    sort(vp.begin(),vp.end());
    int reward=0;
    int d=0;
    for(auto x: vp){
        d += x.first;
        reward+=(x.second-d);
    }
    cout<<reward<<endl;
}