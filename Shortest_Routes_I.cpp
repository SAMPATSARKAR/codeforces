#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector<vector<int>> v;
    for(int i=0;i<m;i++){
        int x,y,z;
        cin>>x>>y>>z;
        v.push_back({x,y,z});
    }
    vector<int> dist(n+1,LLONG_MAX);
    dist[1]=0;
    vector<vector<pair<int,int>>> adj(n+1);
    for(auto x:v){
        int u = x[0];
        int v1= x[1];
        int w = x[2];
        adj[u].push_back({v1,w});
        // adj[v1].push_back({u,w});
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,1});
    while(!pq.empty()){
        int pd = pq.top().first;
        int n1 = pq.top().second;
        pq.pop();
        if(dist[n1] < pd) continue;
        for(auto x: adj[n1]){
            int node = x.first;
            int wt = x.second;
            if(pd+wt<dist[node]){
                dist[node]=pd+wt;
                pq.push({dist[node],node});
            }
        } 
    }
    for(int i=1;i<=n;i++){
        cout<<dist[i]<<" ";
    }cout<<" ";

    return 0;
}