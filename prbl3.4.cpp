#include <iostream>

using namespace std;

int main() {
    int matrix[5][5];

    // Input the 5x5 matrix
    cout << "Enter the 5x5 matrix:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    // Initialize an array to keep track of visited elements
    bool visited[5][5] = {false};

    // Print non-zero values with their row and column numbers
    cout << "Non-zero values of the matrix:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] != 0 && !visited[i][j]) {
                cout << "<" << i + 1 << "," << j + 1 << "> = " << matrix[i][j] << " ";
                visited[i][j] = true;

                // Check for duplicate values
                for (int k = i; k < 5; k++) {
                    for (int l = (k == i ? j + 1 : 0); l < 5; l++) {
                        if (matrix[i][j] == matrix[k][l]) {
                            visited[k][l] = true;
                            cout << "<" << k + 1 << "," << l + 1 << "> = " << matrix[i][j] << " ";
                        }
                    }
                }
            }
        }
    }

    return 0;
}
