#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; string s;
    cin>>n;
    int ans = 0 ;
    while(n){
        cin>>s;
        for(char ch: s){
            if(ch == '-'){
                ans--;
                break;
            }else if(ch == '+'){
                ans++;
                break;
            }
        }
        n--;
    }
    cout<<ans<<endl;
    return 0;
}