#include <iostream>
using namespace std;

int main() {
    int numbers[10], evenCount = 0, oddCount = 0;

    cout << "Enter 10 numbers: ";
    for (int index = 0; index < 10; index++) {
        cin >> numbers[index];
        if (numbers[index] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers : " << oddCount << endl;
    return 0;
}
