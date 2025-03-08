#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, number, sum;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        sum = 0;
        cin >> number;

        for (int j = 1; j < number; j++) {
            if (number%j == 0) sum += j;
        }

        if (sum == number) cout << number << " eh perfeito\n";
        else cout << number << " nao eh perfeito\n";
    }

    return 0;
}
