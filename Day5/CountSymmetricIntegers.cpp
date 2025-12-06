/*You are given two positive integers low and high.

An integer x consisting of 2 * n digits is symmetric if the sum of the first n digits of x is equal to the sum of the last n digits of x. Numbers with an odd number of digits are never symmetric.

Return the number of symmetric integers in the range [low, high].

 

Example 1:

Input: low = 1, high = 100
Output: 9
Explanation: There are 9 symmetric integers between 1 and 100: 11, 22, 33, 44, 55, 66, 77, 88, and 99.*/



#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int countSymmetricIntegers(int low, int high) {
        int ans = 0;
        for(int i = low;i<=high;i++){
            string s = to_string(i);
            int n=s.size();
            if(n%2 != 0) continue;

            int leftSum = 0, rightSum = 0;
            for(int j= 0;j<n/2;j++){
                leftSum += s[j] - '0';
            }
            for(int j= n/2;j<n;j++){
                rightSum += s[j] - '0';
            }

            if (leftSum == rightSum) {
                ans++;
            }
        }

        return ans;
}