#include <bits/stdc++.h>
using namespace std;

int solve(){
    
    int n;cin>>n;
    string s;cin>>s;
    int z=0,one=0;
    int ans=1e9;
    
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            z++;
        }
    }
    if(s[0]=='1') return z;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            z--;
    
        }
        if(s[i]=='1'){
            one++;
        }
        ans=min(ans,abs(z+one));
    }
    return ans;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        cout<<solve()<<endl;
    }

    return 0;
}