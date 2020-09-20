#include <bits/stdc++.h>
using namespace std;
// A - Digit GAme
// Codeforces
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
for (int i=0;i<t;i++)
{
    int n=0;
    cin>>n;
    string st;
    cin>>st;
    int flag=0;
    if (n%2==0)
    {
        for (int i=1;i<n;i+=2)
        {
            if ((st[i]-48)%2==0)
            {
                cout<<2<<endl;
                flag=1;
                break;
            }
        }
        if (flag==0)
        cout<<1<<endl;
    }
    else
    {
        for(int i=0;i<n;i+=2)
        {
            if ((st[i]-48)%2==1)
            {
                flag=1;
                cout<<1<<endl;
                break;
            }

        }
        if (flag==0)
        cout<<2<<endl;
    }
    
}
 return 0;
}