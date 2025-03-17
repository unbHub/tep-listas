#include <bits/stdc++.h>
using namespace std;

int main()
{
    float salary, taxToBePayed;
    cin >> salary;

    if (salary >= 0.00 && salary <= 2000.00) {
        cout << "Isento\n";
        return 0;
    } else if (salary >= 2000.01 && salary <= 3000.00) {
        taxToBePayed = (salary - 2000.00) * 0.08;
    } else if (salary >= 3000.01 && salary <= 4500.00) {
        taxToBePayed = 1000 * 0.08 + (salary - 3000.00) * 0.18;
    } else if (salary > 4500.00) {
        taxToBePayed = 1000 * 0.08 + 1500 * 0.18 + (salary - 4500.00) * 0.28;
    } 

    cout << fixed << setprecision(2);
    cout << "R$ " << taxToBePayed << endl;

    return 0;
}
