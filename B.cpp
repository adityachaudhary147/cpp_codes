#include <bits/stdc++.h>
using namespace std;
#define Aditya
long long sum_upto_x_(long long x)
{
    return x * (x + 1) / 2;
}

int main()
{
    
 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 srand(chrono::high_resolution_clock::now().time_since_epoch().count());

#ifndef Aditya 
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

// cout << "hello";

int t;
cin>>t;

for(int i=0;i<t;i++)
{
    long long n;
    cin>>n;
    long long f=1;
    int ans=0;
    // cout<<"hello";

    for(int i=1;sum_upto_x_((1LL<<i)-1)<=n;i++)
    {
        ans=ans+1;
        n=n-sum_upto_x_((1LL<<i)-1);
    }
    cout<<ans<<endl;
}

 return 0;
}