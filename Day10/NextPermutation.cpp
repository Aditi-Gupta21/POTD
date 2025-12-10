#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i=n-1;
        while(i>0 && (nums[i]<=nums[i-1])){
            i--;
        }
    
        if(i==0){
            sort(nums.begin(), nums.end());
            return;
        }
        int k = i-1, j = n-1;
        while((j>k) && (nums[k]>=nums[j])){
            j--;
        }
        swap(nums[k],nums[j]);
        
        reverse(nums.begin()+i,nums.end());
    }
};

int main(){
    return 0;
}