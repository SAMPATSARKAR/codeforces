#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a,b;
        cin>>a>>b;
        int countOdd=0,countEven=0;
        if(a==b) {
            cout<<0<<endl;continue;

        }
        else if(a<b){
            int x = b-a;
            if(x&1){
                countOdd++;
            }else{
                countOdd++;
                countEven++;
            }
        }else{
            int x = a-b;
            if(x&1){
                countOdd++;
                countEven++;
            }else{
                countOdd++;
            }
        }
        cout<<(countOdd+countEven)<<endl;
    }

    return 0;
}