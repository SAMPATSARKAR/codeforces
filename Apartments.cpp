// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int m,n,o;
    cin>>m>>n>>o;
    vector<int> arr(m);
    vector<int> arr2(n);
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int count=0;
    sort(arr.begin(),arr.end());
    sort(arr2.begin(),arr2.end());
    int i=0;
    int j=0;
    while(i<m && j<n){
        if(abs(arr[i] - arr2[j]) <= o){
            count++;
            i++;
            j++;      
        }
        else if(arr[i] - o < arr2[j]){
            i++;
        }else{
            j++;
        }
    }
    cout<<count<<endl;
}