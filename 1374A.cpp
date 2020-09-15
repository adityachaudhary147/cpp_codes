#include<stdio.h>;
#include<iostream>;
#include <bits/stdc++.h>;
using namespace std;
int main ()
{
long long t=0;
cin>>t;
for (int i=0;i<t;i++)
{
long long x,y,n;
cin>>x;
cin>>y;
cin>>n;

long long d;
d=n%x;
if (d<y)
{
cout<<n-d+y-x<<endl;
}
else
cout<<n-d+y<<endl;

}
return 0;
}
