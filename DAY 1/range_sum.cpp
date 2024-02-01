// #include <bits/stdc++.h>
// using namespace std;
// long long range_sum(long long l,long long r)
// {
//     long long ans=0;
// for(int i=l; i<=r; i++)
// {
// ans+=i;
// }
// return ans;
// }
// int main() {
//     // Your code here
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         long long l,r;
//         cin>>l>>r;
         
//         long long ans= range_sum(l,r);
//     cout<<ans<<endl;
         
//     }
//     return 0;
// }

// solution-  using  sum of a AP series 

#include <bits/stdc++.h>
using namespace std;

long long sumfrom1toN(long long n)
{ 
    // cout<<"num"<<n<<endl;
long long ans=n*1ll*(n+1)/2;

// long long d=num+1/2;
// cout<<" d"<<d<<endl;
// d=d*1ll;
// cout<<" d"<<d<<endl;
// d=d*num;
// cout<<" d"<<d<<endl;


// cout<<"ans"<<ans<<endl;
return ans;
}
int main() {
    // Your code here
    int t;
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        if(l>r)
        swap(l,r);
        long long ans=sumfrom1toN(r)-sumfrom1toN(l-1);
        cout<<ans<<endl;

        
    }
    return 0;
}