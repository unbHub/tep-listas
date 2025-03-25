#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while (cin >> N)
    {
        for (int i = 1; i <= N; i += 2)
        {
            string spaces((N - i) / 2, ' ');
            string stars(i, '*');
            cout << spaces << stars << "\n";
        }

        string trunk_space1((N - 1) / 2, ' ');
        cout << trunk_space1 << "*\n";
        string trunk_space2((N - 2) / 2, ' ');
        cout << trunk_space2 << "***\n";
        cout << "\n";
    }

    return 0;
}

