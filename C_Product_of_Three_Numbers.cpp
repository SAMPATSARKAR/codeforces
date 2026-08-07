#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_set<int> st;
        int first=0,second=0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                st.insert(i);
                first=i;
                n/=i;
                break;
            }
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0 && !st.count(i)){
                st.insert(i);
                second=i;
                n/=i;
                break;
            }
        }
        if(!st.count(n) && st.size()==2){
            cout<<"YES"<<endl;
            cout<<first<<" "<<second<<" "<<n<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}