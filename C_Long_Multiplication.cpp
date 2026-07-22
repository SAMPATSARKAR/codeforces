#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string a,b;
	    cin>>a>>b;
	    if(b>a){
	        swap(a,b);
	    }
	    int n=a.size();
	    bool firsttime=1;
	    for(int i=0;i<n;i++){
	        if(a[i]>b[i] && firsttime==1){//becoz it might be that all the pre elements were equal
	            //now we try to make b's elements bigger
	            firsttime=0;
	        }
	        else if(a[i]>b[i] && firsttime==0){
	            swap(a[i],b[i]);
	        }
	    }

	    cout<<a<<endl;
	    cout<<b<<endl;
	}
 
}