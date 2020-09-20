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
int n,k;
cin>>n>>k;
vector<int> arr;
for(int i=0;i<n;i++)
{
    int a2;
    cin>>a2;
    arr.push_back(a2);
}
sort(arr.begin(),arr.end());
int ans=0;
// pair the largest with the smallest one 
int i=0;
int j=n-1;
while(i<=j)
{
    if (arr[i]+arr[j]<=k)
    {
    ans+=1;
    i++;
    j--;
    }
    else
    {
        ans+=1;
        j--;

    }
}
cout<<ans;

 return 0;
}