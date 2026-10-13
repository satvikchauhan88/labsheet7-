#include <iostream>
#include <cmath>
using namespace std;

int binarySearch(float sortedValues[], int size, float target) {
    const float tolerance = 0.00001f;
    int low = 0, high = size - 1;
    while (low <= high) {
        int middle = low + (high - low) / 2;
        if (fabs(sortedValues[middle] - target) < tolerance) return middle;
        if (sortedValues[middle] < target) low = middle + 1;
        else high = middle - 1;
    }
    return -1;
}

int main() {
    int numberOfElements;
    float sortedValues[100], target;

    cout << "Enter number of elements: ";
    cin >> numberOfElements;
    cout << "Enter " << numberOfElements << " values in ASCENDING order: ";
    for (int index = 0; index < numberOfElements; index++)
        cin >> sortedValues[index];

    cout << "Enter value to search: ";
    cin >> target;

    int position = binarySearch(sortedValues, numberOfElements, target);
    if (position != -1)
        cout << "Found at position " << position + 1 << endl;
    else
        cout << "Not found." << endl;
    return 0;
}
