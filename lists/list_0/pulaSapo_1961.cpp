#include <bits/stdc++.h>
using namespace std;

int main()
{
    int P, N, heightDiff;
    string result = "YOU WIN\n";
    cin >> P >> N;
    vector <int> pipes(N);

    for (int i = 0; i < pipes.size(); i++) cin >> pipes[i];
    for (int j = 1; j < pipes.size(); j++)
    {
        heightDiff = abs(pipes[j] - pipes[j-1]);
        if (heightDiff > P)
        {
            result = "GAME OVER\n";
            break;
        }
    }

    cout << result;

    return 0;
}
