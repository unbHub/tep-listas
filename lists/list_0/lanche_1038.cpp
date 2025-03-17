#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, Y;
    double amount = 0;

    cin >> X >> Y;
   
    switch (X) {
        case 1: amount = Y * 4.00; break; 
        case 2: amount = Y * 4.50; break; 
        case 3: amount = Y * 5.00; break; 
        case 4: amount = Y * 2.00; break; 
        case 5: amount = Y * 1.50; break; 
        default: cout << "Invalido" << endl;
    }

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << amount << endl;

    return 0;
}
