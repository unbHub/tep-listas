#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, temp;

    cin >> A >> B;
    
    if (A < B) {
        temp = A;
        A = B;
        B = temp;
    }

    if (A%B==0) cout << "Sao Multiplos\n";
    else cout << "Nao sao Multiplos\n";

    return 0;
}
