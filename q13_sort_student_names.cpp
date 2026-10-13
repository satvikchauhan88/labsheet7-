#include <iostream>
#include <string>
using namespace std;

int main() {
    int numberOfStudents;
    string studentNames[100];

    cout << "Enter number of students: ";
    cin >> numberOfStudents;
    cin.ignore();

    for (int index = 0; index < numberOfStudents; index++) {
        cout << "Enter name " << index + 1 << ": ";
        getline(cin, studentNames[index]);
    }

    for (int pass = 0; pass < numberOfStudents - 1; pass++) {
        for (int index = 0; index < numberOfStudents - pass - 1; index++) {
            if (studentNames[index] > studentNames[index + 1]) {
                string temporary = studentNames[index];
                studentNames[index] = studentNames[index + 1];
                studentNames[index + 1] = temporary;
            }
        }
    }

    cout << "Names in alphabetical order:" << endl;
    for (int index = 0; index < numberOfStudents; index++)
        cout << studentNames[index] << endl;
    return 0;
}
