#include <bits/stdc++.h>
using namespace std;

class Operations
{
    bool n1, n2, ans;

public:
    void inp()
    {
        cout << "\nEnter two bits as input :\n";
        cin >> n1 >> n2;
    }

    void Oper()
    {
        cout << "\n** Operations **";
        cout << "\n1. AND :" << (n1 & n2);
        cout << "\n2. OR :" << (n1 | n2);
        cout << "\n3. XOR :" << (n1 ^ n2);
        cout << "\n4. NAND :" << !(n1 & n2);
        cout << "\n5. NOR :" << !(n1 & n2);
        cout << "\n6. NOT :" << !n1;
        cout << "\n7. XNOR :" << ((n1 | !n2) & (!n1 + n2)) << "\n";
    }
};

int main()
{
    int choice = -1;
    Operations op;

    do
    {
        cout << "\n**  Gate Operations **\n";
        cout << "\n0. Exit";
        cout << "\n1. Input boolean numbers";
        cout << "\n2. Obtain output of all operations\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            op.inp();
            break;
        case 2:
            op.Oper();
            break;
        default:
            cout << "\n****************\n\n";
            break;
        }
    } while (choice != 0);

    return 0;
}
