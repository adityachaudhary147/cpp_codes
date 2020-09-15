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
set<int> a;
int n=0;
cin>>n;
for(int i=0;i<n;i++)
{
    int a2;
    cin>>a2;

    a.insert(a2);
}
cout<<a.size();
 return 0;
 
}