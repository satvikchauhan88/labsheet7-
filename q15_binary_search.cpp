#include <iostream>
using namespace std;

int main() {
    int numberOfElements, sortedNumbers[100], target;

    cout << "Enter number of elements: ";
    cin >> numberOfElements;
    cout << "Enter " << numberOfElements << " elements in ASCENDING order: ";
    for (int index = 0; index < numberOfElements; index++)
        cin >> sortedNumbers[index];

    cout << "Enter element to search: ";
    cin >> target;

    int low = 0, high = numberOfElements - 1, foundPosition = -1;
    while (low <= high) {
        int middle = low + (high - low) / 2;
        if (sortedNumbers[middle] == target) {
            foundPosition = middle;
            break;
        } else if (sortedNumbers[middle] < target) {
            low = middle + 1;
        } else {
            high = middle - 1;
        }
    }

    if (foundPosition != -1)
        cout << "Element found at position " << foundPosition + 1 << endl;
    else
        cout << "Element not found." << endl;
    return 0;
}
