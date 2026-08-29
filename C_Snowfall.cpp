#include<bits/stdc++.h>// correct code, its accepted
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        vector<int> a;
        vector<int> b;
        vector<int> c;
        vector<int> d;

        for(int i=0;i<n;i++){
            if(v[i]%6==0){
                a.push_back(v[i]);
            }else if(v[i]%2==0){
                b.push_back(v[i]);
            }else if(v[i]%3==0){
                c.push_back(v[i]);
            }else{
                d.push_back(v[i]);
            }
        }
        int j=0;
        for(auto x: a){
            v[j++]=x;
        }
        for(auto x: b){
            v[j++]=x;
        }
        for(auto x: d){
            v[j++]=x;
        }
        for(auto x: c){
            v[j++]=x;
        }
        for(int i=0;i<n;i++) {
            cout<<v[i]<<" ";
        };cout<<endl;
    }

}