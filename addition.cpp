#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions
    cout << "Enter rows and columns of first matrix: ";
    cin >> rows1 >> cols1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> rows2 >> cols2;

    // Check if dimensions match
    if (rows1 != rows2 || cols1 != cols2) {
        cout << "Matrix addition not possible.\n";
        return 0;
    }

    int a[10][10], b[10][10], sum[10][10];

    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols1; j++)
            cin >> a[i][j];

    // Input second matrix
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < cols2; j++)
            cin >> b[i][j];

    // Perform addition
    cout << "Sum of matrices:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
