#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t)
    {
        cin >> n;
        int rem = 0;
        if (n % 2 != 0)
        {
            cout << rem << endl;
        }
        else
        {
            if (n >= 4)
            {
                rem = n / 4;
                rem++;
                cout << rem << endl;
            }
            else
            {
                rem = n / 2;
                cout << rem << endl;
            }
        }

        t--;
    }

    return 0;
}