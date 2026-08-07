#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int x,y,z;
    cin>>x>>y>>z;
        // 1+2*3=7
        // 1*(2+3)=5
        // 1*2*3=6
        // (1+2)*3=9

    int a = x+y+z;
    int b = x*(y+z);
    int c = x*y*z;
    int d = (x+y)*z;
    int ans = max(a,b);
    ans = max(ans,c);
    ans = max(ans,d);
    cout<<ans<<endl;
}