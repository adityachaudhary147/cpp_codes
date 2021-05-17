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
cin >> t;
for(int i=0 ;i<t;i++)
{
    int n;
    cin >> n;
    int ans = INT_MAX;
    for (int x=2 ;x<n;x++)
    {
        if (n%int(pow(2,x)-1)==0)
        {
            cout << n/int((pow(2, x) - 1)) << endl;
            break;
        }
    }
    // cout << ans << endl;
}

return 0;
}