#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        int count=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x == 0){
                count++;
                ans = max(ans,count);

            }else{
                count=0;
            }

        }
        cout<<ans<<endl;
    }
}