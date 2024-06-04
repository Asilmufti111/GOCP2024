#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
for(long long i=2 ; i<=n/2 ; i++){
if(n % i ==0 ){
return false;
}
}
return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int num;
        cin >> num;
        int n=num;
        
        vector<long long> ans;

        for (long long i = 2; i * i <= n; ++i) {
            if (n % i == 0 && isPrime(i)) {
                ans.push_back(i);
                while (n % i == 0) {
                    n /= i;
                }
            }
        }

        if (n > 1 && isPrime(n)) {
            ans.push_back(n);
        }
        int c=1;
            for (long long i = 0; i < ans.size(); ++i) {
c*=ans[i];
                
            }
        if (c==num) {
            cout << "Yes ";
            for (long long i = 0; i < ans.size(); ++i) {
                cout << ans[i] << " ";
            }
            cout << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
