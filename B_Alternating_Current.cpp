#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    string s;cin>>s;
    stack<char> st;
    for(auto x:s){
        if(st.empty()){
            st.push(x);
        }else{
            if(st.top()==x){
                st.pop();
            }else{
                st.push(x);
            }
        }
}
     if(st.size()<=0){
        cout<<"Yes"<<endl;
     }else{
        cout<<"No"<<endl;
     };
}