#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;

        int counta[2]={},countb[2]={};
        for(int i=0;i<n;i++){
            counta[i%2] += a[i]=='1';
            countb[i%2] += b[i]=='1';
        }

        cout<< (counta[0]==countb[0] && counta[1]==countb[1] ? "YES":"NO")<<endl; 
    }
}