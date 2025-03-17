#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, PA, PB, tempo;
    double G1, G2;

    cin >> T;

    for (int i = 0; i < T; i++) {
        tempo = 0;
        cin >> PA >> PB >> G1 >> G2;

        while (PA <= PB) {

            if (tempo > 100) break;
            tempo++;

            PA += PA * G1/100;
            PB += PB * G2/100;

        }

        if (tempo > 100) cout << "Mais de 1 seculo.\n";
        else cout << tempo << " anos.\n";

    }

    return 0;
}
