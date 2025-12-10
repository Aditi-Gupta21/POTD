#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    long long i = n/a , j = m/a;
    if(n%a != 0){
        i++;
    }
    if(m%a != 0){
        j++;
    }
    long long ans = i*j;
    cout<<ans<<endl;
    return 0;
}