#include <iostream>
using namespace std;

int main() {
    int rows, columns, firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];

    cout << "Enter number of rows and columns: ";
    cin >> rows >> columns;

    cout << "Enter elements of first matrix:" << endl;
    for (int row = 0; row < rows; row++)
        for (int column = 0; column < columns; column++)
            cin >> firstMatrix[row][column];

    cout << "Enter elements of second matrix:" << endl;
    for (int row = 0; row < rows; row++)
        for (int column = 0; column < columns; column++)
            cin >> secondMatrix[row][column];

    for (int row = 0; row < rows; row++)
        for (int column = 0; column < columns; column++)
            resultMatrix[row][column] = firstMatrix[row][column] + secondMatrix[row][column];

    cout << "Sum of matrices:" << endl;
    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++)
            cout << resultMatrix[row][column] << "\t";
        cout << endl;
    }
    return 0;
}
