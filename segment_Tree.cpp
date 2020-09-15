#include <bits/stdc++.h>
using namespace std;

struct segtre
{
	int size;
	std::vector<long long> sums;
	void init(int n)
	{
		size=1;
		while(size<n)
		{
			size*=2;
		}
		sums.assign(2*size,0);
	}
	void set(int i,int v,int x,int lx,int rx)
	{
		if (lx-rx==1)
		{
			sums[x]=v;
			return;
		}
		int mid=(lx+rx)/2;
		if (i<mid)
		{
			set(i,v,2*x+1,lx,m);
		}
		else
		{
			set(i,v,2*x+2,m,rx);
		}
		sums[x]=sums[2*x+1]+sums[2*x+2];



	}

	void set(int i,int v)
	{
		set(i,v,0,0,size);
	}
	long long sum(int l,int r,int x,int lx,int rx)
	{
		
	}
	long long  sum(int l,int r)
	{
		return sum(l,r,0,0,size); 
	}



	
};

int main()

{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	long long n,m;
	cin>>n>>m;
	// long long arr[n]={0};

	segtree st;
	st.init()

	for (int i=0;i<n;i++)
	{   int v;
		cin>>v;
		st.set(i,v);

	}

	for (int i=0;i<m;i++)
	{
		// query
		long long nu,le,ri;
		long long suu=0;
		cin>>nu>>le>>ri;
		if (nu==1)
		{
			st.set(le,ri);
			// cout<<"sET";
		}
		else
		{
			suu=seg.sum(le,ri);
			// cout<<"SUM"<<endl;
			cout<<suu<<endl;
		}
	}






	return 0;
}