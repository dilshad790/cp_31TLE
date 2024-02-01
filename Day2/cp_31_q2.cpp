#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Your code here
    int t;
    cin >> t;
    while (t--)
    {
        // int n, x;
        // cin >> n >> x;
        // vector<int> v;

        // for (int i = 0; i < n; i++)
        // {
        //     int fuel_station;
        //     cin >> fuel_station;
        //     v.push_back(fuel_station);
        // }
        // int dist_of_first_station = v[0];
        // int maxi_dist_btnstation = INT_MIN;
        // for (int i = 1; i < v.size(); i++)
        // {
        //     maxi_dist_btnstation = max(maxi_dist_btnstation, v[i] - v[i - 1]);
        // }

        // int dist_form_last=2*(x-v[n-1]);

        // cout<<max({dist_of_first_station,maxi_dist_btnstation,dist_form_last})<<endl;

        // optimal 

        int n,x; 
        cin>>n>>x;
        int prev=0;
        int ans=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            ans=max(ans,a-prev);
            prev=a;
        }
    
    cout<<max(ans,2*(x-prev))<<endl;

    }
return 0;
    }