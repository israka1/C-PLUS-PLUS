#include <iostream>

using namespace std;

int main() {
    int row1, col1, row2, col2, i, j, k;
    int m1[10][10], m2[10][10], pro[10][10];

    cout << "Enter the number of Rows and Columns of first matrix : ";
    cin >> row1 >> col1;

    cout << "Enter the number of Rows and Columns of second matrix : ";
    cin >> row2 >> col2;

    //Matrix multiplication property
    if (col1 == row2) {
        cout << "\nEnter the " << row1 * col1 << " elements of first matrix : \n";

        for (i = 0; i < row1; i++) {
            for (j = 0; j < col1; j++) {
                cin >> m1[i][j];
            }
        }

        cout << "\nEnter the " << row2 * col2 << " elements of second matrix : \n";

        for (i = 0; i < row2; i++) {
            for (j = 0; j < col2; j++) {
                cin >> m2[i][j];
            }
        }

        // cout << "\n\n"
        cout<<"calculating the Product matrix:";
        for (i = 0; i < row1; i++) {
            for (j = 0; j < col2; j++) {
                pro[i][j] = 0;
                 for (k = 0; k < col1; k++)
                    pro[i][j] = pro[i][j] + (m1[i][k] * m2[k][j]);
            }
        }

        cout << "\nThe first matrix is : \n";

        for (i = 0; i < row1; i++) {
            for (j = 0; j < col1; j++) {
                cout << m1[i][j] << "  ";
            }
            cout << endl;
        }

        cout << "\nThe second matrix is : \n";

        for (i = 0; i < row2; i++) {
            for (j = 0; j < col2; j++) {
                cout << m2[i][j] << "  ";
            }
            cout << endl;
        }

        cout << "\nThe Product matrix is : \n";

        for (i = 0; i < row1; i++) {
            for (j = 0; j < col2;j++) {
                cout << pro[i][j] << "  ";
            }
            cout << endl;
        }

    } else {
        cout << "Matrix multiplication can't be done as the indices do not match!";
    }

    cout << "\n\n";

    return 0;
}
