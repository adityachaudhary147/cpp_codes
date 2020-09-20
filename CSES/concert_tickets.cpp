#include <bits/stdc++.h>
using namespace std;





int main()
{
 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 srand(chrono::high_resolution_clock::now().time_since_epoch().count());

#ifndef Aditya 
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n=0,m=0;
cin>>n>>m;
vector <int> tk(n,0);
vector <int> bid(m,0);
for (int i=0;i<n;i++)
{
    int a;
    cin>>a;
    tk[i]=a;
}
for ( int i=0;i<m;i++)
{
    int b;
    cin>>b;
    bid[i]=b;
}

sort(tk.begin(),tk.end());
// reverse(tk.begin(),tk.end());

// sort(bid.begin(), bid.end());
// reverse(bid.begin(), bid.end());
for (auto x : tk)
{
    cout << x;
}
for (auto y : bid)
{
    cout << y;
} 
cout<<endl;
// vector<int> iterator low,upr;
for(int i=0;i<m;i++)
{
    auto x= lower_bound(tk.begin(),tk.end(),bid[i]);
    if (x==tk.end())
    cout<<-1<<endl;
    else
    {
        cout<<*x<<endl;
        tk.erase(x);
    }
    
}
 return 0;
}