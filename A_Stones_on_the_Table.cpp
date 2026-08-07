#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    int count=0;
    int mx = 0;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            count++;

        }
    }
   
    cout<<count<<endl;
}