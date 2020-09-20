#include <bits/stdc++.h>
using namespace std;
#define Aditya
bool cmp(pair<int,int> &a,pair<int,int> &b)
{
    return a.first<b.first;
}
int main()
{
 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 srand(chrono::high_resolution_clock::now().time_since_epoch().count());
#ifndef Aditya
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n=0;
// Number of Restaurant
cin>>n;
vector<pair<int,bool>> m;

for(int i=0;i<n;i++)
{
    int a,b;
    cin>>a>>b;
    m.push_back(make_pair(a, true));
    m.push_back(make_pair(b, false));
}
sort(m.begin(),m.end());
// for(auto x: m)
// {
//     cout<<x.first<<" "<<x.second;
//     cout<<endl;
// }
int ans=0;
int curr=0;

for(int i=0;i<m.size();i++)
{
   if(m[i].second==true)
   curr+=1;
   else
   {
       curr-=1;
   }
   ans=max(curr,ans);
//    cout<<curr<<endl;
}

cout<<ans;
 return 0;
}