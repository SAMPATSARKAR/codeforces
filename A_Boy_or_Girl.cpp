#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    string a;
    cin>>a;
    unordered_set<char> st;
    for(int i=0;i<a.size();i++){
        st.insert(a[i]);
    }
    if(st.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!";
    }
}