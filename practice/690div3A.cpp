// Created for creating an ... impact
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        std::vector<int> v(n);
        for(int i=0;i<n;i++)
        	cin>>v[i];
        int g=0,h=n-1;
        for(int i=0;i<n;i++)
        {
        	if (i%2==0)
        	{
        	cout<<v[g];
        	g++;
        	}
        	else
        	{
        		cout<<v[h];
        		h--;
        	}
        	cout<<" ";
        }
        
        cout<<'\n';
    }
   return 0;
}