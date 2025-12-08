#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int cnt =0;
        long long sum =0;
        bool neg = false;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                neg = true;
            }else if(neg && arr[i]>0){
                cnt++; neg = false;
            }
            if(neg && i==n-1){
                cnt++;
            }
            sum += abs(arr[i]);
        }

        cout<<sum<<" "<<cnt<<endl;
    }

    return 0;
}