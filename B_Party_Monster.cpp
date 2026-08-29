#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string a;
        cin>>a;
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(a[i] == '(' ){
                count1++;
            }else{
                count2++;
            }
        }
        cout<< ((count1==count2)?"YES":"NO")<<endl;
    }
}