#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    vector<int>ans;
    while(t--){
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            x %= 2;
            arr.push_back(x);
        }
        int even = 0 , odd = 0;
        for(int i=0;i<n;i++){
            if(i%2 == 0){
                if(arr[i] != i%2){
                    even++;
                }
            }else{
                if(arr[i] != i%2){
                    odd++;
                }
            }
        }

        int res = odd == even;
        if(res){
            ans.push_back(even);
        }else{
            ans.push_back(-1);
        }
    }

    for(int x:ans){
        cout<<x<<endl;
    }
    return 0;
}