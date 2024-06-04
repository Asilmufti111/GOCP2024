#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        
        int n;
        cin>>n;
        int x=0;
        int f=0;
       for(int i=0;i<n;++i){
                   int ans=0;

           x=i;
           ans=x+x+10+x+20;

           if (ans==n){
               f=1;
               break;
           }
           if (ans>n){
               break;
           }
       }
          

if(f){
    cout<<x<<" "<<x+10<<" "<<x+20<<endl;
}else 
cout<<"Not possible"<<endl;
    
}}
