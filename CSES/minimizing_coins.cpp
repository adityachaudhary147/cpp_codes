#include <bits/stdc++.h>
using namespace std;
#define Aditya

int mincoins(vector<int> coins,int m,int v)
{
    if (v==0)
    return 0;
    int res=INT_MAX-1;
    for(int i=0;i<m;i++)
    {
        if (coins[i]<=v)
        {
            int sd=mincoins(coins,m,v-coins[i]);
            if (sd!=INT_MAX and sd+1<res)
            res=sd+1;
        }
    }
    if (res>=2147483646)
    return -1;
    return res;
}
int main()
{
 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 srand(chrono::high_resolution_clock::now().time_since_epoch().count());

#ifndef Aditya 
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n,x;
cin>>n>>x;
vector<int> vec;
for(int i=0;i<n;i++)
{
    int a;
    cin>>a;
    vec.push_back(a);
}

cout<<mincoins(vec,n,x);
return 0;
}