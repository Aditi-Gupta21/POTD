#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , k;
    cin>>n>>k;
    int a,cnt=0,ans=0, val = 0;
    while(n){
        cin>>a;
        if(a == 0 && cnt<k){
            ans = cnt;
            break;
        }
        cnt++;
        if(cnt == k){
            val = a;
            ans = cnt;
        }else if(cnt >k){
            if(a>=val){
                ans++;
            }
        }
        n--;
    }

    cout<<ans<<endl;

    return 0;
}