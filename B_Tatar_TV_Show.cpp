#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        string a;cin>>a;
        vector<int> cnt(k,0);
        for(int i=0;i<n;i++) cnt[i%k]+= a[i]-'0';
        bool ans=true;
        for(int i=0;i<k;i++){
            if(cnt[i]%2){
                ans=false;
                break;
            }
        }
        cout<<(ans?"YES":"NO")<<endl;

    }

}