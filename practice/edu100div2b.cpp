// Created for creating an ... impact
#include <bits/stdc++.h>
// find the array
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
        for( int i=0;i<n;i++)
        	cin>>v[i];
        
        long long oddsum=0;
        long long evensum=0;
        for(int i=0;i<n;i++)
        {
        	if (i%2==0)
        		evensum+=v[i];
        	else
        		oddsum+=v[i];
        }
        if (evensum<oddsum)
        {
        for (int i=0;i<n;i++)
        {
        	if (i%2==0)
        	cout<<1;
        	else
        	cout<<v[i];
        cout<<" ";
        }
		}
		else

        for (int i=0;i<n;i++)
        {
        	if (i%2!=0)
        	cout<<1;
        	else
        	cout<<v[i];
        cout<<" ";
        }




        cout<<'\n';
    }
    return 0;
}