#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        vector<int> v(26,0);
        for(int i=0;i<n;i++){
            v[a[i]-'a']++;
        }
        for(int i=0;i<m;i++){
            v[b[i]-'a']--;
        }
        vector<char> c={'s','i','x'};
        bool ans=true;
        for(int i=0;i< 26;i++){
            int exp = 0;
            if(i == 's'-'a' || i=='i'-'a' || i=='x'-'a'){
                exp=1;
            }

            if(v[i]!=exp){
                ans=false;
                break;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}
