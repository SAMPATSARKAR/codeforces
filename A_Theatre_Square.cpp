#include<bits/stdc++.h>
using namespace std;
#define int long long 
int32_t main(){
    int n,m,a;
    cin>>n>>m>>a;
    int r = (n/a+(n%a!=0));
    int c = (m/a+(m%a!=0));
    cout<<r*c<<endl;
}