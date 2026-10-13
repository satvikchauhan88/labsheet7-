#include <iostream>
using namespace std;

int main() {
    int numberOfElements, numbers[100], target, occurrenceCount = 0;

    cout << "Enter number of elements: ";
    cin >> numberOfElements;
    cout << "Enter " << numberOfElements << " elements: ";
    for (int index = 0; index < numberOfElements; index++)
        cin >> numbers[index];

    cout << "Enter element to count: ";
    cin >> target;

    for (int index = 0; index < numberOfElements; index++)
        if (numbers[index] == target)
            occurrenceCount++;

    cout << target << " occurs " << occurrenceCount << " time(s)." << endl;
    return 0;
}
