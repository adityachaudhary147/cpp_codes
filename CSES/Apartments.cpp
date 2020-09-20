#include <bits/stdc++.h>
using namespace std;


//#define Aditya

int main()
{
 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 srand(chrono::high_resolution_clock::now().time_since_epoch().count());

#ifndef Aditya 
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n=0,m=0,k=0;
cin>>n>>m>>k;
vector<int> applicants(n,0),apartments(m,0);
for (int i=0;i<n;i++)
{
    cin>>applicants[i];
} 
for (int i=0;i<m;i++)
{
    cin>>apartments[i];
}

std::sort(applicants.begin(),applicants.end());
std::sort(apartments.begin(),apartments.end());
// for(auto x: applicants)
// {
//     cout<<x<<" ";
// }
// cout<<endl;
// for(auto x: apartments)
// {
//     cout<<x<<" ";
// }
int i=0,j=0;
int ans=0;
while (i<n && j<m)
{
    if (abs(apartments[j]-applicants[i])<=k)
    {
        ans+=1;
        i++;
        j++;
    }
    else if (applicants[i]<apartments[j])
            i++;
    else
    {
        j++;
    }
    
    /* code */
}
cout<<ans;

return 0;
}