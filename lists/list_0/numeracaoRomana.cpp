#include <bits/stdc++.h>
using namespace std;

int main()
{
    string romanos[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"}; 
    int N, arabicos[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    cin >> N;

    int indice = 11;
    while (N > 0)
    {
       if (N >= arabicos[indice])
       {
            cout << romanos[indice];
            N -= arabicos[indice]; 
       } else {
           indice--;
       }
    }

    cout << endl;

    return 0;
}
