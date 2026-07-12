#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin>>t;
    int sum=0;
    while(t--){
        int count=0;
        for(int i=0;i<3;i++){
            int x;
            cin>>x;
            if(x==1){
                count++;
            }

        }
        if(count>=2){
            sum+=1;
        }
    }
    cout<<sum<<endl;
    return 0;

}