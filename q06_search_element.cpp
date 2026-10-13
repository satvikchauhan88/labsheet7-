#include <iostream>
using namespace std;

int main() {
    int numberOfElements, numbers[100], target, foundPosition = -1;

    cout << "Enter number of elements: ";
    cin >> numberOfElements;
    cout << "Enter " << numberOfElements << " elements: ";
    for (int index = 0; index < numberOfElements; index++)
        cin >> numbers[index];

    cout << "Enter element to search: ";
    cin >> target;

    for (int index = 0; index < numberOfElements; index++) {
        if (numbers[index] == target) {
            foundPosition = index;
            break;
        }
    }

    if (foundPosition != -1)
        cout << target << " found at position " << foundPosition + 1 << endl;
    else
        cout << target << " not found in the array." << endl;
    return 0;
}
