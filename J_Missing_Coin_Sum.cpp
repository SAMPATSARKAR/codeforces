#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int reach=0;
    for(int i=0;i<n;i++){
        if(v[i]<=reach+1){
            reach+=v[i];
        }

    }
    cout<< reach+1<<endl;
}