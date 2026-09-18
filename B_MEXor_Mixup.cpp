// #include <bits/stdc++.h>
 
// using namespace std;
 
// const int MAX = 100007;
// const int MOD = 1000000007;
 
// void solve() {
//     int a, b;
//     cin >> a >> b;
//     int pXor;
//     if (a % 4 == 1) {pXor = a - 1;}
//     else if (a % 4 == 2) {pXor = 1;}
//     else if (a % 4 == 3) {pXor = a;}
//     else {pXor = 0;}
 
//     if (pXor == b) {cout << a << '\n';}
//     else if ((pXor ^ b) != a) {cout << a + 1 << '\n';}
//     else {cout << a + 2 << '\n';}
// }
 
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
//     //solve();
// }





#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x=0;
        if(a%4==1){
            x=a-1;
        }else if(a%4==2){
            x=1;
        }else if(a%4==3){
            x=a;
        }else{
            x=0;
        }

        if(x==b){
            cout<<a<<endl;
        }else if((x^b)!=a){
            cout<<a+1<<endl;
        }
        else{
            cout<<a+2<<endl;

        }
    }
}




























