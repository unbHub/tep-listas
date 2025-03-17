#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, menor, pos = 0;
    cin >> N;

    int X[N];

    for (int i = 0; i < N; i++)
    {
        cin >> X[i];

        if (i == 0) menor = X[i];

        if (menor > X[i])
        {
            menor = X[i];
            pos = i;
        }
    }

    cout << "Menor valor: " << menor << "\nPosicao: " << pos << endl;

    return 0;
}
