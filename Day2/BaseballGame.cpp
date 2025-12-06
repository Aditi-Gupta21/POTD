#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int calPoints(vector<string>& ops) {
        vector<int>record;
        int n=ops.size(),ans=0;
        int vi=-1;
        for(int i=0;i<n;i++){
            if(ops[i] == "+"){
                int cal = record[vi]+record[vi-1];
                record.push_back(cal);
                vi++;
            }
            else if(ops[i] == "C"){
                record.pop_back();
                vi--;
            }
            else if(ops[i] == "D"){
                int cal = record[vi] * 2;
                record.push_back(cal);
                vi++;
            }else{
                int cal = stoi(ops[i]);
                record.push_back(cal);
                vi++;
            }
        }

        int m = record.size();

        for(int i=0;i<m;i++){
            ans+=record[i];
        }

        return ans;
    }