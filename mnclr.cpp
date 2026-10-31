#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin>>a;
    int n = a.size();
    string ans;
    for(int i=0;i<n;i++){
        ans+=a[i];
        if(i<n-1){
            ans+='o';
        }
    }
    cout<<ans<<endl;

    return 0;
}