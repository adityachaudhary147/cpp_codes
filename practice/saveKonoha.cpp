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
while(t--)
{
    int n,z;
    cin>>n>>z;
    priority_queue<int> a;
    for(int i=0;i<n;i++)
    {
        int cur;
        cin>>cur;
        a.push(cur);
    }
    int cnt=0;
    int flag=0;
    while (z>0)
    {
        cnt+=1;
        int b = a.top();
        z=z-b;
        b=b/2;
        if (a.top() <= 0 && z > 0)
        {
            cout << "Evacuate" << endl;
            break;
        }
        if (z <= 0)
        {
            cout << cnt << endl;
            break;
        }

        a.pop();
        a.push(b);
    }

}

 return 0;
}