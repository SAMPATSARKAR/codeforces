#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    int count0=0,count1=0;
    int mx0=-1,mx1=-1;
    for(int i=0;i<n.size();i++){
        if(n[i]=='1'){
            count1++;
            mx1=max(mx1,count1);
        }else{
            count1=0;
        }

        if(n[i]=='0'){
            count0++;
            mx0=max(mx0,count0);
        }else{
            count0=0;
        }

    }
    if(mx1>=7 || mx0 >=7){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;

}