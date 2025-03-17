#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, temp, totalStarsAttacked = 0, totalSheeps = 0, count = 0;
    cin >> N;

    vector<int> stars(N);
    vector<bool> visited(N, false);

    for (int i = 0; i < stars.size(); i++)
    {
        cin >> stars[i];
        totalSheeps += stars[i];
    }

    while (count >= 0 && count < stars.size())
    {
        if (!visited[count])
        {
            totalStarsAttacked++;
            visited[count] = true;
        }

        temp = stars[count];
        if (stars[count] > 0) {
            stars[count]--;
            totalSheeps--;
        }

        if (temp % 2 == 1)
        {
            count++;
        } else {
            count--;
        }

    }

    cout << totalStarsAttacked << " " << totalSheeps << endl;

    return 0;
}
