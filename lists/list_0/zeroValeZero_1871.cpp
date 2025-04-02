#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int M, N;
    cin >> M >> N;
    while (M != 0 && N != 0)
    {
        long int sum = M + N;
        string numString = to_string(sum);

        numString.erase(remove(numString.begin(), numString.end(), '0'), numString.end());

        cout << numString << endl;

        cin >> M >> N;
    }


    return 0;
}
