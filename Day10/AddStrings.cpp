#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = num1.size(), m = num2.size();
        int i = n-1, j=m-1,carry =0;
        vector<int>temp;
        string ans ="";
        while(i>=0 && j>=0){
            int sum = (num1[i]-'0') + (num2[j]-'0') + carry;
            if(sum >= 10){
                carry = 1;
                sum -= 10;
            }else{
                carry = 0;
            }
            temp.push_back(sum);
            i--;j--;
        }
        while(i>=0){
            int sum = (num1[i]-'0') + carry;
            if(sum >= 10){
                carry = 1;
                sum -= 10;
            }else{
                carry = 0;
            }
            temp.push_back(sum);
            i--;
        }
        while(j>=0){
            int sum =(num2[j]-'0') + carry;
            if(sum >= 10){
                carry = 1;
                sum -= 10;
            }else{
                carry = 0;
            }
            temp.push_back(sum);
            j--;
        }
        if(carry){
            temp.push_back(carry);
        }

        reverse(temp.begin(), temp.end());
        for(int k:temp){
            char ch = k +'0';
            ans += ch;
        }

        return ans;

    }
};

int main(){
    return 0;
}