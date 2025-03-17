#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X = 0, Y = 1;
    
    while (X != Y)
    {
        cin >> X >> Y;
        if (X < Y)
        {
            cout << "Crescente\n";
        } else if (X > Y) {
            cout << "Decrescente\n";
        }
    }

    return 0;
}
