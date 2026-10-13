#include <iostream>
using namespace std;

int main() {
    int numberOfElements, numbers[100], target;
    bool isPresent = false;

    cout << "Enter number of elements: ";
    cin >> numberOfElements;
    cout << "Enter " << numberOfElements << " elements: ";
    for (int index = 0; index < numberOfElements; index++)
        cin >> numbers[index];

    cout << "Enter number to check: ";
    cin >> target;

    for (int index = 0; index < numberOfElements; index++) {
        if (numbers[index] == target) {
            isPresent = true;
            break;
        }
    }

    if (isPresent)
        cout << target << " is present in the array." << endl;
    else
        cout << target << " is NOT present in the array." << endl;
    return 0;
}
