#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    string a;
    cin>>a;
    int C=0,c=0;
    for(auto x:a){
        if(x>='A' && x<='Z') C++;
        else
        c++;
    }
    if(C>c){
        for(int i=0;i<a.size();i++){
            a[i]=toupper(a[i]);
        }
    }else{
        for(int i=0;i<a.size();i++){
            a[i]=tolower(a[i]);
        }

    }
    cout<<a<<endl;
}