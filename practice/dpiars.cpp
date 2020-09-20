#include <bits/stdc++.h>
using namespace std;


#define Aditya
int main()
{
 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 srand(chrono::high_resolution_clock::now().time_since_epoch().count());

#ifndef Aditya 
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n,m;
cin>>n>>m;
set<int> s;
vector<int> A;
vector<int> B;
int mina=INT_MAX,minai=0;
int maxb=INT_MIN,maxbi=0;
for ( int i=0;i<n;i++)
{   
    int cur;
    cin>>cur;
    A.push_back(cur);
    if (mina>=cur)
    {mina=cur;
    minai=i;
    }
}
for (int i = 0; i < m; i++)
{
    int cur;
    cin>>cur;
    B.push_back(cur);
    if (maxb<=cur)
    {
        maxb=cur;
        maxbi=i;
    }
}
// int cnt=0;
// for ( int x=0;x<n;x++)
// {
// for( int y=0;y<m;y++)
// {
//     int ini=s.size();
//     // cout<<ini<<endl;
//     s.insert(A[x]+B[y]);
//     // cout<<s.size()<<endl;
//     if (ini!=s.size())
//     {
//     cout<<x<<" "<<y<<endl;
//     cnt+=1;
//     // cout<<cnt<<endl;
//     if (cnt==n+m-1)
//     break;
//     }    
// }
// if (cnt == n + m - 1)
//     break;
// }


for(int i=0;i<m;i++)
{
    cout<<minai<<" "<<i<<endl;
}
for (int i=0;i<n;i++)
{
    if (i!=minai)
    cout<<i<<" "<<maxbi<<endl;
}


 return 0;
}