#include <bits/stdc++.h>
using namespace std;

int main()
{
    int original[3], ordenado[3];
    for (int i = 0; i < 3; i++) cin >> original[i];

    copy(original, original + 3, ordenado);

    sort(ordenado, ordenado + 3);
    for (int i = 0; i < 3; i++) cout << ordenado[i] << endl;
    cout << endl;

    for (int i = 0; i < 3; i++) cout << original[i] << endl;
    
    return 0;
}
