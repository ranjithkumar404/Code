#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input the dimensions of the matrices
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Initialize the matrices
    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

    // Input elements for the first matrix
    cout << "Enter elements of the first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter elements of the second matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Add the matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result matrix
    cout << "The sum of the matrices is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
