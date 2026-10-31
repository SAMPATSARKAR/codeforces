#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;cin>>n;
        int p;
        int n1=n-1,count=0;
        while(n1>0){
            n1=n1>>1;
            count++;
        }
        p=pow(2,count-1);
        vector<int> v;
        for(int i=1;i<p;i++){
            v.push_back(i);
        } 
        v.push_back(0);
        for(int i=p;i<n;i++){
            v.push_back(i);
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;


    }

    return 0;
}