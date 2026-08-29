#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int i=0,j=b.size()-1;
    bool ans=true;
    if(n!=b.size()) {
        cout<<"NO"<<endl;
        return 0;
    }
    while(i<n && j>=0){
        if(a[i]!=b[j]){
            ans=false;
            break;
        }
        i++;j--;
    }
    if(ans){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}