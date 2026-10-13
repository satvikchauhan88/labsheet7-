#include <iostream>
using namespace std;

int main() {
    int numberOfElements, numbers[100];

    cout << "Enter number of elements: ";
    cin >> numberOfElements;
    cout << "Enter " << numberOfElements << " elements: ";
    for (int index = 0; index < numberOfElements; index++)
        cin >> numbers[index];

    int maximum = numbers[0], minimum = numbers[0];
    for (int index = 1; index < numberOfElements; index++) {
        if (numbers[index] > maximum) maximum = numbers[index];
        if (numbers[index] < minimum) minimum = numbers[index];
    }

    cout << "Maximum element = " << maximum << endl;
    cout << "Minimum element = " << minimum << endl;
    return 0;
}
