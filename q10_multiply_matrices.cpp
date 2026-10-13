#include <iostream>
using namespace std;

int main() {
    int firstRows, firstColumns, secondRows, secondColumns;
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];

    cout << "Enter rows and columns of first matrix: ";
    cin >> firstRows >> firstColumns;
    cout << "Enter rows and columns of second matrix: ";
    cin >> secondRows >> secondColumns;

    if (firstColumns != secondRows) {
        cout << "Multiplication not possible (columns of first must equal rows of second)." << endl;
        return 0;
    }

    cout << "Enter elements of first matrix:" << endl;
    for (int row = 0; row < firstRows; row++)
        for (int column = 0; column < firstColumns; column++)
            cin >> firstMatrix[row][column];

    cout << "Enter elements of second matrix:" << endl;
    for (int row = 0; row < secondRows; row++)
        for (int column = 0; column < secondColumns; column++)
            cin >> secondMatrix[row][column];

    for (int row = 0; row < firstRows; row++) {
        for (int column = 0; column < secondColumns; column++) {
            resultMatrix[row][column] = 0;
            for (int k = 0; k < firstColumns; k++)
                resultMatrix[row][column] += firstMatrix[row][k] * secondMatrix[k][column];
        }
    }

    cout << "Product of matrices:" << endl;
    for (int row = 0; row < firstRows; row++) {
        for (int column = 0; column < secondColumns; column++)
            cout << resultMatrix[row][column] << "\t";
        cout << endl;
    }
    return 0;
}
