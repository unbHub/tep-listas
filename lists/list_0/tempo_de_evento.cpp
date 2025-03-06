#include <bits/stdc++.h>
using namespace std;

int main() {
    int diaInicio, horaInicio, minutoInicio, segundoInicio;
    int diaFim, horaFim, minutoFim, segundoFim;

    cin.ignore(4); // Ignora "Dia "
    cin >> diaInicio;
    scanf("%d : %d : %d", &horaInicio, &minutoInicio, &segundoInicio);

    cin.ignore(4); // Ignora "Dia "
    cin >> diaFim;
    scanf("%d : %d : %d", &horaFim, &minutoFim, &segundoFim);

    int inicioSegundos = (diaInicio * 86400) + (horaInicio * 3600) + (minutoInicio * 60) + segundoInicio;
    int fimSegundos = (diaFim * 86400) + (horaFim * 3600) + (minutoFim * 60) + segundoFim;
    
    int diferenca = fimSegundos - inicioSegundos;

    int dias = diferenca / 86400;
    diferenca %= 86400;
    int horas = diferenca / 3600;
    diferenca %= 3600;
    int minutos = diferenca / 60;
    int segundos = diferenca % 60;

    cout << dias << " dia(s)\n";
    cout << horas << " hora(s)\n";
    cout << minutos << " minuto(s)\n";
    cout << segundos << " segundo(s)\n";

    return 0;
}

