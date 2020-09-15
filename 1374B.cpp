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
n=0;
y=0;
while (1)
{
if (x==1)
{
break;
}
if (x%2==0 && x%3==0)
{
x=x/6;
n=n+1;
}
else if (x%3==0)
{
x=x/3;
n=n+2;
}
else
{
    y=1;
break;

}
}
if (y==1)
{

    cout<<-1<<endl;
}
else
cout<<n<<endl;
}
return 0;
}
