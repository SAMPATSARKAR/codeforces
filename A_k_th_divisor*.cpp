#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n,k;
    cin>>n>>k;
    int count=0;
    vector<int> sm;
    vector<int> bg;
    for(int i=1;i*i<=n;i++){
        if(n%i == 0 ){
            sm.push_back(i);
            if(i!=n/i){// to get the other factor which is greater than sqrt(n)
                bg.push_back(n/i);
            }
        }
    }
    reverse(bg.begin(),bg.end());
    for(auto x:bg){
        sm.push_back(x);
    }
    if(k>sm.size()){
        cout<<-1<<endl;
    }else{
        cout<<sm[k-1]<<endl;
    }
    return 0;
}