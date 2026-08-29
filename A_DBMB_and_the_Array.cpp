#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
        }
        if(sum>s){
            cout<<"NO"<<endl;
        }else{
            while(sum<s){
                sum+=x;
            }

            if(sum == s){
                cout<<"YES"<<endl;
            }else{

                cout<<"NO"<<endl;
            }
        }

    }
}