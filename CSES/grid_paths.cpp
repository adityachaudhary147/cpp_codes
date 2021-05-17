#include <bits/stdc++.h>
using namespace std;


// #define Aditya
int recfun(vector<vector<int>> vec,int n,int i, int j)
{
    if (i+1==n &&  j+1==n && vec[i][j]==0)
    return 1;

    if (i + 1 == n && j + 1 == n && vec[i][j] != 0)
        return 0;
    if (i<n && j<n)
    {
    if (vec[i][j]==0)
    {
        
        if (i+1<n && j+1<n)
            return (recfun(vec,n,i + 1, j) + recfun(vec, n,i, j + 1)) % 1000000007;
        
        
        if (i+1<n )
            return recfun(vec,n, i + 1, j) % 1000000007;
        
        
        if (j+1<n)
            return recfun(vec,n,i, j + 1) % 1000000007;
    }
     return 0;   
    }
        

       

    return 0;
    
}

int main()
{
 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 srand(chrono::high_resolution_clock::now().time_since_epoch().count());

#ifndef Aditya 
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n;
vector<vector<int>> vec;

// int n;
cin>>n;
// vector <vector<int>> vec;

    for (int i = 0; i < n; i++)
    {
        vector<int> sd;
        for (int j = 0; j < n; j++)
        {

            char a;
            cin >> a;
            if (a == '.')
            {
                sd.push_back(0);
            }
            else
            {
                sd.push_back(1);
            }
        }
        vec.push_back(sd);
        sd.empty();
    }
cout << recfun(vec, n, 0, 0) % 1000000007;

return 0;
}