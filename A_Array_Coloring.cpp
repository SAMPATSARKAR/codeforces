#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int oddSum=0;
        int evenSum=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2 == 0){
                evenSum+=arr[i];
            }else{
                oddSum+=arr[i];
            }
        }
        if(oddSum%2 == 0 && evenSum%2 == 0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
}