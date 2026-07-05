#include <iostream>
using namespace std;

#define int long long

int32_t main() {
    string s;
    cin>>s;

    int ind = -1;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]%2 == 0){
            ind = i;
            if(s[i]<s[s.size()-1]){
                break;
            }
        }
    }
    if(ind==-1){
        cout<<-1<<endl;
    }else{
        swap(s[ind],s[s.size()-1]);
        cout<<s<<endl;
    }
}