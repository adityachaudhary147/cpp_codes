// #include <bits/stdc++.h>
#include <iostream>
using namespace std;


#include <iomanip>
#define Aditya

int main()
{
//  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//  srand(chrono::high_resolution_clock::now().time_since_epoch().count());

#ifndef Aditya 
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
double ans=0;
for(int i=0;i<12;i++)
{double a;
cin>>a;
ans+=a;
}
ans=ans/12;
cout<<"$";
cout<< setprecision(2)<<fixed<<ans<<endl;
 return 0;
}