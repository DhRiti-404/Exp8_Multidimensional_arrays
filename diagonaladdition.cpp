#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> rows1 >> cols1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> rows2 >> cols2;

    if (rows1 != rows2 || cols1 != cols2) {
        cout << "Matrix addition not possible. Dimensions do not match.\n";
        return 0;
    }

    if (rows1 != cols1) {
        cout << "Diagonal addition not possible. Matrices must be square.\n";
        return 0;
    }

    int a[10][10], b[10][10];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols1; j++)
            cin >> a[i][j];

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < cols2; j++)
            cin >> b[i][j];

    cout << "Sum of diagonal elements:\n";
    for (int i = 0; i < rows1; i++) {
        int sum = a[i][i] + b[i][i];
        cout << "Diagonal element [" << i << "][" << i << "] = " << sum << endl;
    }

    return 0;
}
