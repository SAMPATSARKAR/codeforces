#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;cin>>a;
    int n = a.length();
    string ans;
    for(int i=0;i<n;i++){
        char x = a[i];
        if(x>='A' && x<='Z'){
            x=tolower(x);
        }
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='y'){
            continue;
            
        }
        ans+='.';
        ans+=x;
    }
    cout<<ans<<endl;
}