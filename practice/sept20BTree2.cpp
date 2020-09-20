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
int t;
cin>>t;
for (int i=0;i<t;i++)
{
    int n;
    cin>>n;
    set<int> st;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if (a!=0)
        st.insert(a);
    }
    cout<<st.size()<<endl;
}
 return 0;
}