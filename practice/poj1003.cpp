// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <iomanip>
// #define Aditya

int main()
{
//  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//  srand(chrono::high_resolution_clock::now().time_since_epoch().count());

#ifndef Aditya 
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
double ans=0;
// cout<<ans;
while (1)
{
    double a;
    cin>>a;
    double yu=0.00;
    if (a==yu)
    break;

    double ans=0;
    int i=2;
    while (ans<a)
    {
        ans=ans+1/i;
        i++;
    }
    cout<<ans;
}

return 0;
}