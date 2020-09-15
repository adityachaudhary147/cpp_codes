#include <bits/stdc++.h>
using namespace std;
#define ll long long
std::vector<ll> graph;
std::vector<std::vector<ll> v;> exedges;
std::vector<ll> order;


void dfs(ll a)
{
	visited[a]=1;
	for (auto k: graph[a])
	{
		if (visited[k]!=1)
			dfs(k);

	}
	order.push_back(a);

}
int main()

{



	long long t;

	for( int i=0;i<t;i++)
	{
		long long n,m;
		cin>>n>>m;
		for (int j=0;j<m;j++)
		{
			long long a,u,v;
			cin>>a>>u>>v;
			u--;
			v--;
			if (a==1)
			{
				graph[u].push_back(v);
			}
			exedges[u].push_back(v);
		}
		visited=std::vector<ll>(n);
		order.clear();
		for (int i;i<n;i++)
		{
			if (visited[i]!=1)
				dfs(i);
		}
		reverse(order.begin(),order.end());
		std::vector<ll> position(n);
		for(int i=0;i<n;i++0)
		{
			position[order[i]]=i;


		}
		int flag=0;
		for(int i=0;i<n;i++)
		{
			for (auto x :graph[i])
			{
				if (position[x]>position[i])
				{
					flag=1;
				}
			}
		}
		if (flag==1)
			cout<<"NO";
		else
		{

			cout<<"YES";
			for (int i;i<n;i++)
				for (auto x:exedges[i])
				{
					if (position[i]>position[x])
					{
						cout<<x+1<<" "<<i+1<<endl;
					}
					else
						cout<<i+1<<" "<<x+1<<endl;

				}
		}



	}
	return 0;
}

