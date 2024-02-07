// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // Your code here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v;

//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             v.push_back(x);
//         }
//         // bool flag = true;

//         for (int i = 1; i < n - 1; i++)
//         {
//             for (int j = 1; j < n - 1; j++)
//             {
//                 if (v[j - 1] < v[j] && v[j] > v[j + 1])
//                     swap(v[j], v[j+ 1]);
//             }
//         }
// bool flag=true;
//  for (int j = 1; j < n - 1; j++)
//             {
//                 if(v[j]<v[j-1])
//                 flag=false;
//             }

//         if (flag==true)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     return 0;
// }

// first value must be 1

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        vi arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << '\n';
    }
}