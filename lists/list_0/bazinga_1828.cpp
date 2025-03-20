#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        string sheldon, raj;
        cin >> sheldon >> raj;

        cout << "Caso #" << i << ": ";
        if (sheldon == raj)
        {
            cout << "De novo!\n";
        }
        else if ((sheldon == "tesoura" && raj == "papel") || (sheldon == "papel" && raj == "pedra") || 
        (sheldon == "pedra" && raj == "lagarto") || (sheldon == "lagarto" && raj == "Spock") || 
        (sheldon == "Spock" && raj == "tesoura") || (sheldon == "tesoura" && raj == "lagarto") || 
        (sheldon == "lagarto" && raj == "papel") || (sheldon == "papel" && raj == "Spock") || 
        (sheldon == "Spock" && raj == "pedra") || (sheldon == "pedra" && raj == "tesoura"))
        {
            cout << "Bazinga!\n";
        }
        else
        {
            cout << "Raj trapaceou!\n";
        }
    }


    return 0;
}
