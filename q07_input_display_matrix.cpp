#include <iostream>
using namespace std;

int main() {
    int rows, columns, matrix[10][10];

    cout << "Enter number of rows and columns: ";
    cin >> rows >> columns;

    cout << "Enter matrix elements:" << endl;
    for (int row = 0; row < rows; row++)
        for (int column = 0; column < columns; column++)
            cin >> matrix[row][column];

    cout << "Matrix:" << endl;
    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++)
            cout << matrix[row][column] << "\t";
        cout << endl;
    }
    return 0;
}
