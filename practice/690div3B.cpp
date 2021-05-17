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
        string s;
        cin>>s;
        string ar[]={"2020","202","20","2","020","0"};
        string mai="2020";
        int i=0;
        for (i=0;i<4;i++)
        {
        	if (mai[i]==s[i])
        		continue;
        	else
        		break;
        }
        if (i==4)
        {
        	cout<<"YES";
        }
        else if (i==3)
        {
        	if (s[n-1]=='0')
        	{
        		cout<<"YES";
        	}
        	else
        	{
        		cout<<"NO";
        	}
        }
        else if (i==2)
        {
        	if (s[n-1]=='0' && s[n-2]=='2')
        	{
        		cout<<"YES";
        	}
        	else
        	{
        		cout<<"NO";
        	}
        }
        else if (i==1)
        {
        	int flag=0;
        	for(int j=n-1;j>n-4;j--)
        	{
        		// cout<<"<";
        		if (s[j]==mai[j-n+4])
        		{
        			continue;
        		}
        		else
        		{
        			flag=1;
        			// break;
        		}
        	}
        	if (flag==1)
        	{
        		cout<<"NO";
        	}
        	else
        	{
        		cout<<"YES";
        	}
        }
        else
        {

        	int flag=0;
        	for(int j=n-1;j>n-5;j--)
        	{
        		if (s[j]==mai[j-n+4])
        		{
        			continue;
        		}
        		else
        		{
        			flag=1;
        			break;
        		}
        	}
        	if (flag==1)
        	{
        		cout<<"NO";
        	}
        	else
        	{
        		cout<<"YES";
        	}

        }


        cout<<'\n';
    }
    return 0;
}