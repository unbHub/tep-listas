#include <bits/stdc++.h>
using namespace std;

int main()
{
    float A, B, C;
    cin >> A >> B >> C;

    cout << fixed << setprecision(1);
    if (A + B > C && B + C > A && A + C > B) cout << "Perimetro = " << A + B + C << endl;
    else cout << "Area = " << ((A + B) * C)/2 << endl;

    return 0;
}
