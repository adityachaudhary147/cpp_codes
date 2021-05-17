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
    int t;
    cin>>t;
    // cout<<t;
    while(t--){
        int n;
        cin>>n;
        // db1(n);
        string rv="",bv="";
        int r=0,b=0;
        cin>>rv;
        cin>>bv;
        rep(i,n) if (rv[i]>bv[i]) r++; else if (rv[i]!=bv[i]) b++;
        // db2(r,b);
        if (r>b)
        {
        	cout<<"RED"<<endl;
        }
        else if (r!=b)
        {
        	cout<<"BLUE"<<endl;
        }
        else
        	cout<<"EQUAL"<<endl;
        
    }
    return 0;
}