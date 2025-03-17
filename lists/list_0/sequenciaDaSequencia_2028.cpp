#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, count = 0;

    while (cin >> N) {
        count++;

        vector<int> numbers;
        int totalNumbers = (N * (N + 1)) / 2 + 1;

        for (int i = 0; i <= N; i++) {
            if (i == 0) numbers.push_back(0);
            else numbers.insert(numbers.end(), i, i);
        }
        
        if (totalNumbers == 1)
        {
            cout << "Caso " << count << ": " << totalNumbers << " numero\n";
        } else {
            cout << "Caso " << count << ": " << totalNumbers << " numeros\n";
        }
        
        for (size_t i = 0; i < numbers.size(); i++) {
            cout << numbers[i] << (i + 1 < numbers.size() ? " " : "\n");
        }
        cout << "\n";
    }

    return 0;
}
