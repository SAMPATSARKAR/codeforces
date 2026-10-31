#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int odd=0,eveneven=0,evenodd=0;

        for(int i=0;i<n;i++){
            if(v[i]%2==1){
                odd++;
            }else if(v[i]%4==0){
                eveneven++;
            }else{
                evenodd++;
            }
        }
        int ans = max(odd,max(eveneven,evenodd));
        cout<<ans<<endl;


    }

    return 0;
}