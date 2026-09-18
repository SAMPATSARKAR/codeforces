#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        char arr[3][3];
        int count[3]={0};
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                char a;
                cin>>a;
                if(a!='?') count[a-'A']++;
            }
        }
        for(int i=0;i<3;i++) if(count[i]<3) cout<<(char)('A'+i)<<endl;

    }
}
