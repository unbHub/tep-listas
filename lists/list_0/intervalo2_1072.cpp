#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X, values_in = 0, values_out = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> X;

        if (X >= 10 && X <= 20) values_in++;
        else values_out++;
    }

    cout << values_in << " in\n" << values_out << " out\n";

    return 0;
}
