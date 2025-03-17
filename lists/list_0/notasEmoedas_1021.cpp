#include <bits/stdc++.h>
using namespace std;

int main()
{
    int qtdd;

    double N;
    cin >> N;

    int valor_em_centavos = N*100;

    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    
    cout << fixed << setprecision(2);
    cout << "NOTAS:\n";
    for (int i = 0; i < sizeof(notas)/sizeof(notas[0]); i++) {
       qtdd = valor_em_centavos / notas[i]; 
       cout << qtdd << " nota(s) de R$ " << notas[i] / 100.00 << endl;
       valor_em_centavos %= notas[i];
    }

    cout << "MOEDAS:\n";
    for (int i = 0; i < sizeof(moedas)/sizeof(moedas[0]); i++) {
       qtdd = valor_em_centavos / moedas[i]; 
       cout << qtdd << " moeda(s) de R$ " << moedas[i] / 100.00 << endl;
       valor_em_centavos %= moedas[i];
    }

    return 0;
}
