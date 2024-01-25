#include<iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout << "Enter the row for Matrix-1  ";
    cin >> r1;
    cout << "Enter the column for Matrix-1 ";
    cin >> c1;
    int mat1[r1][c1];
    cout << "Enter elements in Matrix-1\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter the row for Matrix-2  ";
    cin >> r2;
    cout << "Enter the column for Matrix-2 ";
    cin >> c2;
    int mat2[r2][c2], res[r1][c2];
    
    if (c1 != r2) {
        cout << "Can't Multiply";
        return 0;
    }
    
    cout << "Enter elements in Matrix-2\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> mat2[i][j];
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "\nResultant Matrix is\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
