#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    sort(v.begin(),v.end(),[&](int a,int b){
        return a>b;
    });
    int sum=0;
    for(auto x:v){
        sum+=x;
    }
    int count=0;
    int mysum=0;
    for(auto x:v){
        mysum+=x;
        count++;
        if(mysum>sum-mysum){
            cout<<count<<endl;
            return 0;
        }
    }

}