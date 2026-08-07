#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        vector<int> v(3);
        for(int i=0;i<3;i++){
            cin>>v[i];
        }
        if(v[0]==v[1] || v[1]==v[2] || v[0]==v[2]){
            cout<<0<<endl;
            continue;
        }
        sort(v.begin(),v.end());

        int d ;
        d = min(v[2]-v[1],v[1]-v[0]);
        cout<<d<<endl;
    }
}