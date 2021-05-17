// author : Aditya Chaudhary
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// Nodes
int n;
// Graph or Tree Structure
unordered_map<int, vector<int>> gr;
// NodeINFO or MaY BE EDGES..
vector<int> info(100000 + 7);
int m;
#define mod 1000000000 + 7
vector<int> prime(100000 + 7);
void dfs(int a, int par)
{
    info[a] = 1;
    for (auto x : gr[a])
    {
        if (x != par)
        {
            dfs(x, a);
            info[a] += info[x];
        }
    }
}
void testCase()
{
    gr.clear();
    info.clear();
    prime.clear();

    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        gr[a].push_back(b);
        gr[b].push_back(a);
    }
    dfs(1, 0);
    for (int i = 1; i < n + 1; i++)
    {
        info[i] = info[i] * (n - info[i]);
        // cout<<info[i];
    }
    sort(info.begin() + 1, info.begin() + n + 2, greater<int>());
    // for(int i=1;i<n+1;i++)
    // {
    // 	cout<<info[i]<<" ";
    // }
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> prime[i];
    sort(prime.begin(), prime.begin() + m, greater<int>());
    int st = 0;
    if (m < n - 1)
    {
        int curr = m;
        int cnt = 0;
        while (curr != n - 1)
        {
            prime[curr] = 1;
            curr += 1;
        }
    }
    else
    {
        int diff = m - n + 1 + 1;
        long long first = 1;
        for (int i = 0; i < diff; i++)
            first = first % 1000000007 * prime[i] % 1000000007;
        prime[diff - 1] = first % 1000000007;
        st = diff - 1;
    }
    long long ans = 0;
    for (int i = 0; i < n - 1; i++)
    {

        long long aise = 0;
        long long l = prime[st + i], l2 = info[i + 1];
        long long ai = l * l2;
        ai = ai % 1000000007;
        ans += ai;
        ans = ans % 1000000007;
    }
    cout << ans << endl;
    return;
}
int main()
{
    // your code goes here
    int t = 1;
    // IF NO TEST CASE COMMENT THIS
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        testCase();
        cnt += 1;
    }
    return 0;
}