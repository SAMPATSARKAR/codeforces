#include<iostream>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr1(n);
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        vector<int> arr(n+1,0);
        for(int i=1;i<=n;i++){
            arr[i]=arr[i-1]+arr1[i-1];
        }
        string s;
        cin>>s;
        int l=0;
        int r=n-1;
        int ans=0;
        while(l<r){
            while(l<n && arr[l]!='l'){
                l++;
            }
            while(r<n && arr[r]!='r'){
                r--;
            }
            if(l<r){
                ans+=(arr[r+1]-arr[l]);
                l++;
                r--;
            }
        }
        cout<<ans<<endl;

        
    }
}