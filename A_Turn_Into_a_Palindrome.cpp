#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        char a;
        cin>>a;
        string b;
        cin>>b;
        int count=0;
        for(int i=0;i<n/2;i++){
            if(b[i]==b[n-i-1]){
                continue;
            }else if((b[i]==a && b[n-i-1]!=a) || (b[i]!=a && b[n-i-1]==a) ){
                count++;
            }else{
                count+=2;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}