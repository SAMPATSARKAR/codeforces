#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> va;
        vector<int> vb;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            va.push_back(x);
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            vb.push_back(x);
        }
        // va[n+1]=0;
        va.push_back(0);
        for(int i=n-1;i>=0;i--) va[i]=max(va[i],max(va[i+1],vb[i]));
        vector<int> pre(n+1,0);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+va[i];
        }

        for(int i=1;i<=q;i++){
            int l,r;
            cin>>l>>r;
            cout<<pre[r]-pre[l-1]<<" ";
            
        }
        cout << '\n';
    }
}