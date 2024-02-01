#include <bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < v[i - 1])
        {
            // cout<<v[i]<<" "<<v[i-1]<<endl;
            return false;

        }
    }
    return true;
}
int main()
{
    // Your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        for (int i = 0; i < v.size(); i++)
        {
            if (isSorted(v))
            {
                cout << "YES" << endl;
                // cout<<"fun Called"<<endl;
                break;

            }

            if (k == 1 && isSorted(v)!=1)
            {
                cout << "NO" << endl;
                break;

            }

            if (k >= 2)
            {
                cout << "YES" << endl;
                break;


            }
        }
    }

    return 0;
}