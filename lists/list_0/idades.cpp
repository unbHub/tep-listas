#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age, sum = 0, count = 0;
    float average = 0.00;

    do {
        cin >> age;

        if (age >= 0) {
            sum += age;
            count++;
        }

    } while (age >= 0);

    if (count != 0) average = (float)sum / count;

    cout << fixed << setprecision(2) << average << endl;

    return 0;
}
