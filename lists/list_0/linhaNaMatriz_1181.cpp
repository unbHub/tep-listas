#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L;
    char T;
    float M[12][12], sum = 0;

    cin >> L;
    cin >> T;

    for (int i = 0; i < 12; i++)
    {
        for (int j= 0; j < 12; j++) cin >> M[i][j];
    }

    switch (T)
    {
        case 'S':
            for (int i = 0; i < 12; i++) sum += M[L][i];
            cout << fixed << setprecision(1) << sum << endl;
            break;
        case 'M':
            for (int i = 0; i < 12; i++) sum += M[L][i];
            cout << fixed << setprecision(1) << sum/12.00 << endl;
            break;
        default: cout << "Invalido\n";
    }

    return 0;
}
