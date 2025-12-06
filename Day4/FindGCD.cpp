/*Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.

 

Example 1:

Input: nums = [2,5,6,9,10]
Output: 2
Explanation:
The smallest number in nums is 2.
The largest number in nums is 10.
The greatest common divisor of 2 and 10 is 2.
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findGCD(vector<int>& nums) {
        int sm = INT_MAX, lg = INT_MIN, n = nums.size();
        for(int i =0;i<n;i++){
            sm = min(sm,nums[i]);
            lg = max(lg,nums[i]);
        }
        int ans = 1;
        for(int i =1;i<=sm;i++){
            if((sm%i ==0) && (lg%i == 0)){
                ans = i;
            }
        }

        return ans;
}