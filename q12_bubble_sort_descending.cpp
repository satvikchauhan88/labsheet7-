#include <iostream>
using namespace std;

int main() {
    int numberOfElements, numbers[100];

    cout << "Enter number of elements: ";
    cin >> numberOfElements;
    cout << "Enter " << numberOfElements << " elements: ";
    for (int index = 0; index < numberOfElements; index++)
        cin >> numbers[index];

    for (int pass = 0; pass < numberOfElements - 1; pass++) {
        for (int index = 0; index < numberOfElements - pass - 1; index++) {
            if (numbers[index] < numbers[index + 1]) {
                int temporary = numbers[index];
                numbers[index] = numbers[index + 1];
                numbers[index + 1] = temporary;
            }
        }
    }

    cout << "Sorted (descending): ";
    for (int index = 0; index < numberOfElements; index++)
        cout << numbers[index] << " ";
    cout << endl;
    return 0;
}
