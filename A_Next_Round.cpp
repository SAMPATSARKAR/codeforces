#include<bits/stdc++.h>
using namespace std;
// #define int long long
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),[&] (auto a, auto b){
        return a>b;
    });
    int pos = v[k-1];
    // if(pos==0){
    //     cout<<0<<endl;
    //     return 0;
    // }
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]>0){
            if(v[i]>=pos){
                count++;
            }
        }
    }
    cout<<count<<endl;
}