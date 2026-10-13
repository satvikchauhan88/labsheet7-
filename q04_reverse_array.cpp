#include <iostream>
using namespace std;

int main() {
    int numberOfElements, numbers[100];

    cout << "Enter number of elements: ";
    cin >> numberOfElements;
    cout << "Enter " << numberOfElements << " elements: ";
    for (int index = 0; index < numberOfElements; index++)
        cin >> numbers[index];

    for (int left = 0, right = numberOfElements - 1; left < right; left++, right--) {
        int temporary = numbers[left];
        numbers[left] = numbers[right];
        numbers[right] = temporary;
    }

    cout << "Reversed array: ";
    for (int index = 0; index < numberOfElements; index++)
        cout << numbers[index] << " ";
    cout << endl;
    return 0;
}
