/*Given three integer arrays nums1, nums2, and nums3, return a distinct array containing all the values that are present in at least two out of the three arrays. You may return the values in any order.
 

Example 1:

Input: nums1 = [1,1,3,2], nums2 = [2,3], nums3 = [3]
Output: [3,2]
Explanation: The values that are present in at least two arrays are:
- 3, in all three arrays.
- 2, in nums1 and nums2.*/


#include<bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2,
                              vector<int>& nums3) {
        vector<int> ans;
        set<int> s1;
        set<int> s2;
        set<int> s3;
        for (int i : nums1)
            s1.insert(i);
        for (int i : nums2)
            s2.insert(i);
        for (int i : nums3)
            s3.insert(i);
            
        map<int, int> freq_count;
        for (int i : s1)
            freq_count[i]++;
        for (int i : s2)
            freq_count[i]++;
        for (int i : s3)
            freq_count[i]++;
        for (auto it : freq_count) {
            if (it.second >= 2)
                ans.push_back(it.first);
        }

        return ans;
    }