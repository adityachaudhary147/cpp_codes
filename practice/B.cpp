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


int t;
cin>>t;
// cout<<"aditya"<<endl;
for(int i=0;i<t;i++)

{
    vector<pair<int,int>> stable1;
    vector<pair<int, int>>  unstable;
    int n=0;
    cin>>n;
    vector<int> arr;
    vector<int> st;
    for( int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }
    for(int i = 0;i<n; i++)
    {
        int a;
        cin>>a;
        st.push_back(a);
    }
    for(int i = 0;i<n; i++)
    {
        if (st[i]==1)
      stable1.push_back(make_pair(arr[i],i));
      else
      {
          unstable.push_back(make_pair(arr[i],i));
      }
    }
    // cout<<"as";
    sort(unstable.begin(),unstable.end());
    reverse(unstable.begin(), unstable.end());
        // for(auto x: unstable)
        // {
        //     cout<<x.first<<" ";
        //     cout<<x.second<<" ";
        // }
        int stp = 0,
            unstp = 0;
    for (int i=0;i<n;i++)
    {
        if (stp<stable1.size())
        {
        if (stable1[stp].second==i)
        {
            cout<<stable1[stp].first<<" ";
            stp+=1;
        }
        else
        {
            cout << unstable[unstp].first << " ";
            unstp += 1;
        }
        }
        else
        {
            cout << unstable[unstp].first << " ";
            unstp += 1;
        }
        
       
    }
    cout << "\n";
}
// cout << "Aditya";
return 0;
}