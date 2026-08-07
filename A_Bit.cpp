#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        if(a=="++X"){
            ++ans;
        }else if(a=="X++"){
            ans++;
        }else if(a=="--X"){
            --ans;
        }else{
            ans--;
        }

    }
    cout<<ans<<endl;
}