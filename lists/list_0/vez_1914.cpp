#include <bits/stdc++.h>
using namespace std;

int main()
{
    int QT;
    cin >> QT;

    for (int i = 0; i < QT; i++)
    {
        string name1, choice1, name2, choice2;
        int N, M, result;

        cin >> name1 >> choice1 >> name2 >> choice2;
        cin >> N >> M;
        result = N + M;

        if ((choice1 == "PAR" && result % 2 == 0) || (choice1 == "IMPAR" && result % 2 == 1))
        {
            cout << name1 << endl; 
        } else {
            cout << name2 << endl;
        }

    }

    return 0;
}
