#include <iostream>
using namespace std;

int main() {
    int numberOfElements, numbers[100];

    cout << "Enter number of elements: ";
    cin >> numberOfElements;

    for (int index = 0; index < numberOfElements; index++) {
        cout << "Enter element " << index + 1 << ": ";
        cin >> numbers[index];
    }

    cout << "Array elements: ";
    for (int index = 0; index < numberOfElements; index++)
        cout << numbers[index] << " ";
    cout << endl;
    return 0;
}
