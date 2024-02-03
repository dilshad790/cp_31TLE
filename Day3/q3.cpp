#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Your code here
    int t;
    cin >> t;
    while (t--)
    {
        int numOfCell;
        cin >> numOfCell;
        string s;
        cin >> s;

        int x=0;
        vector<int> cnt;

        for (int i = 0; i < numOfCell;)
        {
            if (s[i] == '#')
            {
                i++;
                // continue;
            }

            while (i < numOfCell && s[i] == '.')
            {
                i++;
                x++;
            }
            cnt.push_back(x);
            x = 0;
        }

        sort(cnt.begin(), cnt.end());
        if (cnt.back() < 3)
        {
            cout << accumulate(cnt.begin(), cnt.end(), 0) << endl;
        }

        else
            cout << 2 << endl;
    }
    return 0;
}