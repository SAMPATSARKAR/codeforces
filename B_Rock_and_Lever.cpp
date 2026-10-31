#include <bits/stdc++.h>//correctly submitted
using namespace std;
#define int long long
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            int x;cin>>x;
            v[i]=x;
        }
        vector<int> v1(30);
        for(int i=0;i<n;i++){
            int x=v[i];
            int count=0;
            while(x>0){
                x=x>>1;
                count++;
            }
            int h=count-1;
            v1[h]++;
        }
        int sum=0;
        for(int i=0;i<30;i++){
            if(v1[i]>1){
                int z=v1[i];
                sum+=(z*(z-1))/2;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}