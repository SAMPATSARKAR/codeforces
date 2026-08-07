#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t = "hello";
    int i=0,j=0;
    int n = t.size();
    int m = s.size();
    while(i<m && j<n ){
        if(s[i] == t[j]){
            j++;
        }
        i++;
    }
    if(j==n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}