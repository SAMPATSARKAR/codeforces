#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int n = a.size();
    vector<int> v;
    for(int i=0;i<n;i++){
        if(a[i]!='+'){
            v.push_back(a[i]-'0');
        }
    }
    sort(v.begin(),v.end());
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!='+'){
            a[i]=(v[j++]+'0');
        }
    }
    cout<<a<<endl;
}