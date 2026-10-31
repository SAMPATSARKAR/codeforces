#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        //all rock
        if(b>=c){
            cout<<string(sum,'R')<<endl;
        }
        else if(c>=a){// all scissor
            cout<<string(sum,'S')<<endl;
            
        }
        else {//all paper
            //(a>=b)
            cout<<string(sum,'P')<<endl;

        }
    }

    return 0;
}