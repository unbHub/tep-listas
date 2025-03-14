#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;
    unsigned long fibonacci[61];

    cin >> T;

    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (int i = 2; i < 61; i++) fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];

    for (int j = 0; j < T; j++)
    {
        cin >> N;
        cout << "Fib(" << N << ") = " << fibonacci[N] << endl;
    }

    return 0;
}
