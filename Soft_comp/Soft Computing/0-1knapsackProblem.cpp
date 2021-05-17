#include <bits/stdc++.h>
using namespace std;

int knapsack_dp(int n, int M, int w[], int p[])
{
    int i, j;

    int knapsack[n + 1][M + 1];

    for (j = 0; j <= M; j++)
        knapsack[0][j] = 0;

    for (i = 0; i <= n; i++)
        knapsack[i][0] = 0;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= M; j++)
        {

            if (w[i - 1] <= j)
            {
                knapsack[i][j] = max(knapsack[i - 1][j], p[i - 1] + knapsack[i - 1][j - w[i - 1]]);
            }

            //can not include the current item in this case
            else
            {
                knapsack[i][j] = knapsack[i - 1][j];
            }
        }
    }

    return knapsack[n][M];
}

int main()
{
    int i, j;
    int n;
    int M;

    cout << "Enter the no. of items ";
    cin >> n;

    int w[n];
    int p[n];

    cout << "Enter the weight and price of all items" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> w[i] >> p[i];
    }

    cout << "enter the capacity of knapsack  ";
    cin >> M;

    int result = knapsack_dp(n, M, w, p);

    cout << "The maximum value of items that can be put into knapsack is " << result;

    return 0;
}
