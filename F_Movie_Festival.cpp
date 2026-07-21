#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;cin>>t;
    vector<pair<int,int>> v;
    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),[&] (pair<int,int> &a, pair<int,int> &b){
        return a.second<b.second;
    });
    int lastend=0,count=0;
    for(auto x: v){
        if(x.first>=lastend){
            count++;
            lastend=x.second;
        }

    }
    cout<<count<<endl;

    // map -> char(key), int(value)
    
    mpp[d] = 1
    mpp[f] = 3
    mpp[s[i]] > 0
}