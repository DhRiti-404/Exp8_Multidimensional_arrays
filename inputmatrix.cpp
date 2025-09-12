//Exp 8
//Program 1
#include <iostream>
using namespace std;
int main()
{
    int r1, r2, c1, c2;
    cout<< "Enter the number of rows and columns for the first matrix: ";
    cin >> r1 >> c1;
    cout<< "Enter the number of rows and columns for the second matrix: ";
    cin >> r2 >> c2
    int a[r1][c1], b[r2][c2], result[r1][c2];
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> b[i][j];
        }
    }
    cout<< "First matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    } 
    cout<< "Second matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
PS C:\Users\DELL\Desktop\C++> g++ l8.cpp -o l8
PS C:\Users\DELL\Desktop\C++> .\l8.exe
Enter the number of rows and columns for the first matrix: 3
3
Enter the number of rows and columns for the second matrix: 3
3
Enter elements of first matrix:
5
6
8
1
6
8
6  
9
2
Enter elements of second matrix:
2
3
4
1
6
4
1
3
5
First matrix:
5 6 8
1 6 8
6 9 2
Second matrix:
2 3 4
1 6 4
1 3 5
  */
