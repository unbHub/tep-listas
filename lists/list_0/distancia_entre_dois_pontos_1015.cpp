#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << fixed << setprecision(4);
    cout << sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)) << endl;

    return 0;
}
