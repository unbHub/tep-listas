#include <bits/stdc++.h>
using namespace std;

int main()
{
    double A, B, C, delta;
    cin >> A >> B >> C;

    delta = pow(B, 2) - 4*A*C;

    if (delta < 0 || A == 0) 
    {
        cout << "Impossivel calcular\n";
    } else {
        double r1, r2;
        r1 = (-B + sqrt(delta)) / (2*A);
        r2 = (-B - sqrt(delta)) / (2*A);
        cout << fixed << setprecision(5);
        cout << "R1 = " << r1 << endl;
        cout << "R2 = " << r2 << endl;
    } 

    return 0;
}
