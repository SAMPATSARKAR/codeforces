#include<bits/stdc++.h>
using namespace std;
vector<int> lucky;
void generateLucky(int n ){
    if(n>1000) return;
    if(n!=0) lucky.push_back(n);

    generateLucky(n*10+4);
    generateLucky(n*10+7);


}
int main(){
    int s;
    cin>>s;
    generateLucky(0);
    for(auto x:lucky){
        if(s%x==0){
           cout<<"YES";
           return 0; 
        }
    }
    cout<<"NO"<<endl;
}