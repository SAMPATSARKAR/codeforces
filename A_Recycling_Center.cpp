#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// #define int long long
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        int count=0;
        for(int i=0;i<n;i++){
            int num=v[i];
            if(num*(1<<count)<=k){// it doesnot cost but inc the wt
                count++;
            }
        }
        cout<< n-count<<endl;

    }
}