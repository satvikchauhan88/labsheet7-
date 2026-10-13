#include <iostream>
using namespace std;

int main() {
    int numberOfElements, numbers[100], sum = 0;

    cout << "Enter number of elements: ";
    cin >> numberOfElements;
    cout << "Enter " << numberOfElements << " elements: ";
    for (int index = 0; index < numberOfElements; index++) {
        cin >> numbers[index];
        sum += numbers[index];
    }

    cout << "Sum of all elements = " << sum << endl;
    return 0;
}
