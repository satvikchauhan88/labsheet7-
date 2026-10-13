#include <iostream>
using namespace std;

int main() {
    int numberOfElements, sortedNumbers[100];

    cout << "Enter number of elements: ";
    cin >> numberOfElements;
    cout << "Enter " << numberOfElements << " elements in ASCENDING order: ";
    for (int index = 0; index < numberOfElements; index++)
        cin >> sortedNumbers[index];

    int low = 0, high = numberOfElements - 1;
    while (low < high) {
        int middle = low + (high - low) / 2;
        if (sortedNumbers[middle] <= sortedNumbers[middle + 1])
            low = middle + 1;
        else
            high = middle;
    }

    cout << "Largest element = " << sortedNumbers[low]
         << " (position " << low + 1 << ")" << endl;
    return 0;
}
