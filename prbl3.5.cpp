
#include <iostream>
#include <climits>

using namespace std;

int main() {
    int matrix[5][5];


    cout << "Enter the 5x5 matrix:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }


    cout << "Minimum values from each row,without zero:\n";
    for (int i = 0; i < 5; i++) {
        int minVal = INT_MAX; // Initialize to a large value
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] != 0 && matrix[i][j] < minVal) {
                minVal = matrix[i][j];
            }
        }
        if (minVal != INT_MAX) {
            cout << "Row " << i + 1 << ": " << minVal << endl;
        }
    }

    return 0;
}
