#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    int countA=0,countB=0;
    for(int i=0;i<n;i++){
        if(a[i]=='A'){
            countA++;
        }else{
            countB++;
        }
    }
    if(countA>countB){
        cout<<"Anton"<<endl;
    }else if(countA<countB){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }
}