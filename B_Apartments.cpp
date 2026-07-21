#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(n);//user
    vector<int> a(m);//apartment
    for(int i=0;i<n;i++) cin>>v[i];
    for(int j=0;j<m;j++) cin>>a[j];
    sort(v.begin(),v.end());
    sort(a.begin(),a.end());
    int i=0,j=0,count=0;
    while(i<n && j<m){
        if(v[i]<=a[j]+k && v[i]>=a[j]-k){
            count++;
            a[j]=0;
        }else if(v[i]>a[j]+k){
            j++;continue;

        }else if(v[i]<a[j]-k){
            i++;continue;
        }
        i++;j++;
    }
    cout<<count<<endl;

}