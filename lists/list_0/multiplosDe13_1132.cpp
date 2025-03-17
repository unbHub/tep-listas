#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, Y, temp, sum = 0;

    cin >> X;
    cin >> Y;

    if (X > Y) {
        temp = Y;
        Y = X;
        X = temp;
    }

    for (int i = X; i <= Y; i++) {
        if (i%13 != 0) sum += i;
    }

    cout << sum << endl;

    return 0;
}
