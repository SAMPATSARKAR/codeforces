#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int q;
        cin>>q;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int> pre(n+1,0);
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]+v[i-1];
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            int total = pre[n];
            int sub=pre[r]-pre[l-1];
            int len = r-l+1;
            int sum=len*k;
            int amt = total-sub+sum;
            if(amt%2!=0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }

        

    }
}