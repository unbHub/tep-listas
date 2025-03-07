#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, previous = 0, next = 1, fibonacci;

    cin >> N;

    cout << previous;
    fibonacci = next;
    for (int i = 1; i < N; i++)
    {
        cout << " " << fibonacci;
        fibonacci = previous + next;
        previous = next;
        next = fibonacci;
    }
    
    cout << endl;

    return 0;
}
