#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a[i]=x;
    }
    
    for(int mask=0;mask<(1<<n);mask++){
        int sum=0;
        for(int i=0;i<n;i++){
            if((mask>>i)&1){
                sum+=a[i];
            }else{
                sum-=a[i];
            }
        }
        if(sum%360==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;



}
