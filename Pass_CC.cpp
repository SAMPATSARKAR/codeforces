#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
    for(int i=0;i<n;i++){
        vector<int>v(5) ;
        for(int i=0;i<5;i++){
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        
        if(v[1]>=60 && v[3]>=30){
            
            cout<<"Pass"<<endl;
        }else{
            cout<<"Fail"<<endl;
            
        };
        cout<<endl;
    }
    return 0;

}
