#include <iostream>
using namespace std;

int main()
{
    string colors[] =
        {"yelloworange", "orange", "redorange", "red", "redviolet", "violet", "blueviolet", "blue", "bluegreen", "green", "yeloowgreen", "yellow"};

    int A[4][3] = {{1, 5, 9}, {2, 6, 8}, {3, 7, 11}, {4, 8, 12}};
    int n, m;
    int flag = 5;
    cin >> n;
    cin >> m;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (n == A[i][j])
            {
                for (int k = 0; k < 3; k++)
                {
                    if (m == A[i][k])
                    {

                        flag = i;
                        break;
                    }
                }
            }
        }
    }
    if (flag != 5)
    {
        for (int k = 0; k < 3; k++)
        {
            if ((A[flag][k] != n) && (A[flag][k] != m))
                cout << colors[(A[flag][k]) - 1];
        }
    }
    else
        cout << "enter valid no.";
}
