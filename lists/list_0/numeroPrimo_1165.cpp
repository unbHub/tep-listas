#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, number, count;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        count = 0;
        cin >> number;

        for (int j = 1; j <= number; j++) {
            if (number%j == 0) count++;
        }

        if (count > 2) cout << number << " nao eh primo\n";
        else cout << number << " eh primo\n";
    }

    return 0;
}
