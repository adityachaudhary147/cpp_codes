#include <bits/stdc++.h>
using namespace std;

int tsp(const vector<vector<int>>& cities, int pos, int visited, vector<vector<int>>& state)
{
    if(visited == ((1 << cities.size()) - 1))
        return cities[pos][0];
    if(state[pos][visited] != INT_MAX)
        return state[pos][visited];

    for(int i = 0; i < cities.size(); ++i)
    {
        // can't visit  unless we're ending & skip if already visited
        if(i == pos || (visited & (1 << i)))
            continue;

        int distance = cities[pos][i] + tsp(cities, i, visited | (1 << i), state);
        if(distance < state[pos][visited])
            state[pos][visited] = distance;
    }

    return state[pos][visited];
}
int main()
{
    vector<vector<int>> cities =  { { 0, 10, 15, 20,10 },
                       { 10, 0, 35, 25,30 },
                       { 15, 35, 0, 30,12 },
                       { 20, 25, 30, 0,10 },
                       {10, 30, 12, 10,0 }
                                 };

    vector<vector<int>> state(cities.size());
    for(auto& neighbors : state)
        neighbors = vector<int>((1 << cities.size()) - 1, INT_MAX);

    cout << "minimum: " << tsp(cities, 0, 1, state) << endl;

    return 0;
}
