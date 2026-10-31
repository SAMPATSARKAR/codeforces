#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(m+1);
    for(int i=0;i<m+1;i++){
        int x;cin>>x;
        v[i]=x;
    }
    int sum=0;
    for(int i=0;i<m;i++){
        int f=v[m]^v[i];
        int count=0;

        while(f>0){
            f=f&(f-1);
            count++;
        }
        if(count<=k){
            sum+=1;
        }

    }
    cout<<sum<<endl;
    return 0;
}