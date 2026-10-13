#include <iostream>
using namespace std;

int binarySearch(int sortedNumbers[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int middle = low + (high - low) / 2;
        if (sortedNumbers[middle] == target) return middle;
        if (sortedNumbers[middle] < target) low = middle + 1;
        else high = middle - 1;
    }
    return -1;
}

int main() {
    int numberOfElements, sortedNumbers[100], target;

    cout << "Enter number of elements: ";
    cin >> numberOfElements;
    cout << "Enter " << numberOfElements << " integers in ASCENDING order: ";
    for (int index = 0; index < numberOfElements; index++)
        cin >> sortedNumbers[index];

    cout << "Enter integer to search: ";
    cin >> target;

    int position = binarySearch(sortedNumbers, numberOfElements, target);
    if (position != -1)
        cout << "Found at position " << position + 1 << endl;
    else
        cout << "Not found." << endl;
    return 0;
}
