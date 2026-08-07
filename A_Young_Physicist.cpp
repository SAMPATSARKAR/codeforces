#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int v[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>v[i][j];
        }
    }
    int sum1=0;
    int sum2=0;
    int sum3=0;
    for(int i=0;i<1;i++){
        for(int j=0;j<n;j++){
            sum1+=v[j][i];
        }
    }
    for(int i=1;i<2;i++){
        for(int j=0;j<n;j++){
            sum2+=v[j][i];
        }
    }
    for(int i=2;i<3;i++){
        for(int j=0;j<n;j++){
            sum3+=v[j][i];
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<3;j++){
    //         sum+=v[i][j];
    //     }
    // }
    if(sum1==0 & sum2==0 && sum3 ==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }



}