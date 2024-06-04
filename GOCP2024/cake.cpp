#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int can=0;
        int ans=0;
        while (n--){
            int p;
            cin>>p;
            can+=p;
        }
        while (can>=100){
            can-=100;
            ans++;
        }
        if (ans>1)
        cout<<ans<<endl;
        else
        cout<<1<<endl;
    }
}