#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Matrix size input
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int A[100][100], B[100][100], result[100][100];

    // First matrix input
    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    // Second matrix input
    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> B[i][j];
        }
    }

    // Subtraction logic
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }

    // Result print
    cout << "Resultant Matrix after subtraction:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
