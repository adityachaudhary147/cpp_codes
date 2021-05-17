// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

#include <math.h>
// for set precision and fixed
#include <iomanip>

#define pii 3.141592653589793238

#define Aditya
int main()
{

//  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//  srand(chrono::high_resolution_clock::now().time_since_epoch().count());

#ifndef Aditya 
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


int t=0;
cin>>t;
for (int i=0;i<t;i++)
{

    double R,n;
    cin>>R>>n;
    // cout<<R<<" "<<n<<endl;
    double theta=pii/n;
    double r=(R*sin(theta))/(1+sin(theta));
    cout<<"Scenario #"<<i+1<<":"<<endl;
    cout << setprecision(3) << fixed <<r<< '\n';
    cout<<endl;
}
 return 0;
}