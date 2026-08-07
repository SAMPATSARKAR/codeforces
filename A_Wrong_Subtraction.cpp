#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n,k;
    cin>>n>>k;

    while(k--){
        if(n%10==0){
            n/=10;
            continue;
        }
        n--;
    }
    cout<<n<<endl;
}