#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=n;
        int count=0;
        while(x){
            x/=10;
            count++;
        }
        string s="1";
        for(int i=0;i<count-1;i++){
            s+='0';
        }
        s+='1';
        int q = stoi(s);
        cout<<q<<endl;
    }
}