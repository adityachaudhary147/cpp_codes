// Created by ...
#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    if (n==1 || n==2)
    {
    	cout<<4<<endl;
    }
    else
    {
    	int a,b;
    	a=n/2;
    	b=n/2;
    	a++;
    	b++;
    	if (n%2==0)
    	{
    		cout<<a*b;
    	}
    	else
    	{
    		b++;
    		cout<<2*a*b;
    	}
    }

    return 0;
}