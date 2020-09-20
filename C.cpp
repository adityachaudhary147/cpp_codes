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
int t=0;
cin>>t;
for(int i=0;i<t;i++)
{
    int n,kk;
    cin>>n>>kk;
int sum=0;
vector<int> vec;
for(int i=0;i<n;i++)
{
    int a;
    cin>>a;
vec.push_back(a);
}
int flag=0;
int atleast=0;
for (int i=0; i<n;i++)
{
    sum+=(vec[i]-kk);
    if (kk!=vec[i])
    {
        flag=1;
    }
    else
    {
    
        atleast=1;
    }
    
}

if (flag==0)
cout<<flag<<endl;
else
{
    if (sum==0 or atleast==1)
    cout<<1<<endl;
    else
    {
        cout<<2<<endl;
    }
    
}

}
 return 0;
}