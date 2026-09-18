#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=n;
        int count=0;
        while(x>0){
            x=x>>1;
            count++;
        }
        int a=1;
        while(count-1>0){
            a=a<<1;
            count--;
        }
        cout<<(a-1)<<endl;
    }
}