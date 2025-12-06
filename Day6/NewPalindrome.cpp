#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    vector<string> ans;
    while (t--)
    {
        cin >> s;
        unordered_map<int, int> st;
        int n = s.size();
        if (n <= 3)
        {
            ans.push_back("NO");
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                st[s[i]]++;
            }
            int cnt = 0;
            for (auto j : st)
            {
                if (j.second >= 2)
                {
                    cnt++;
                }
            }
            if (cnt <= 1)
            {
                ans.push_back("NO");
            }
            else
            {
                ans.push_back("YES");
            }
        }
    }

    for (auto k : ans)
    {
        cout << k << endl;
    }

    return 0;
}