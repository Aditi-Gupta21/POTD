#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int>ans(n+1,0);
        if(n==1 && digits[0] != 9){
            digits[0]+=1;
            return digits;
        }
       
        int i = n-1;
        for(;i>=0;i--){
            if(digits[i]<9){
                digits[i] += 1;
                return digits;
            }else{
                
                digits[i]=0;
            }
        }
        
        if(i<0){
            ans[0]=1;
        }
        return ans;
    }
};

int main(){
    return 0;
}