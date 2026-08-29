#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        bool found=false;
        for(int i=0;i<n;i++){
            if(v[i]==67){
                found=true;
                break;
            }
        }
        if(found){
            cout<<"YES"<<endl;
        }else{

            cout<<"NO"<<endl;
        }
    }
}