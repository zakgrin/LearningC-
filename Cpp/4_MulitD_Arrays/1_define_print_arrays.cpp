#include<iostream>
using namespace std;

// void printMatrix(int (*matrix)[3], int rows); 
void printMatrix(int matrix[][3], int rows);
void printMatrixDiagonal(int matrix[][3], int rows);
void printMatrixSelect(int matrix[][3], int rows, string select="upper");
// we have to give the number of cols

int main()
{
    // Define Array 2x3:
    const int rows = 3;
    const int cols = 3;
    // way1: 
    int matrix1[rows][cols] = {{1,2,3},{4,5,6},{7,8,9}};
    // way2: 
    int matrix2[rows][cols] = {1,2,3,4,5,6,7,8,9};
    // way3:
    int matrix3[rows][cols] = {{3},{4},{7,8,9}}; // ignored values will be zeros

    // Print Array Items:
    // cout << matrix[0][0] << matrix[0][1] << matrix[0][2] << endl;
    printMatrix(matrix1, rows);
    printMatrix(matrix2, rows);
    printMatrix(matrix3, rows);

    // Interesting: 
    // when index col does not exist in row 0 it extends to the next rows
    cout << matrix1[0][3] << endl; // 4
    cout << matrix1[0][8] << endl; // 9

    // Print Diagonal:
    printMatrixDiagonal(matrix1, rows);

    // Print Triangles:
    printMatrixSelect(matrix1, rows, "upper");
    printMatrixSelect(matrix1, rows, "lower");
}

void printMatrix(int matrix[][3], int rows){
    cout << "matrix: " << endl;
    for (int i=0; i<rows; i++)
    {
        if (i == 0 )
            cout << "[";
        for (int j=0; j<3; j++)
        {       
            if (j == 0 )
                cout << "[";
            if (j == 3-1 )
                cout << matrix[i][j] << "]";
            else
                cout << matrix[i][j] << ", ";
        }
        
        if (i == rows-1)
        {
            cout << "]";
        }
        else
            cout << ", " << endl << " ";

    }
    cout << endl;
}


void printMatrixDiagonal(int matrix[][3], int rows)
{
    cout << "matrix diagonal: " << endl;
    for (int i=0; i<rows; i++)
    {
        if (i == 0 )
            cout << "[";    
        if (i == rows-1)
        {
            cout << matrix[i][i] << "]";
        }
        else
            cout << matrix[i][i] << ", ";

    }
    cout << endl;
}

void printMatrixSelect(int matrix[][3], int rows, string select)
{
    cout << "matrix: " << endl;
    for (int i=0; i<rows; i++)
    {
        if (i == 0 )
            cout << "[";
        for (int j=0; j<3; j++)
        {       
            if (select == "upper")
            {
                if (i <= j) // remove '=' to exclude diagonal
                {
                    if (j == 0 )
                        cout << "[";
                    if (j == 3-1 )
                        cout << matrix[i][j] << "]";
                    else
                        cout << matrix[i][j] << ", ";
                }
                else
                {
                    if (j == 0 )
                        cout << "[";
                    if (j == 3-1 )
                        cout << "#" << "]";
                    else
                        cout << "#" << ", ";
                }
            }
            else if (select == "lower")
            {
                if (i >= j) // remove '=' to exclude diagonal
                // if (i >= 1 && j >= 1 && (i !=1 || j!=1)) // lower right
                {
                    if (j == 0 )
                        cout << "[";
                    if (j == 3-1 )
                        cout << matrix[i][j] << "]";
                    else
                        cout << matrix[i][j] << ", ";
                }
                else
                {
                    if (j == 0 )
                        cout << "[";
                    if (j == 3-1 )
                        cout << "#" << "]";
                    else
                        cout << "#" << ", ";
                }
            }
                        
        }
        if (i == rows-1)
        {
            cout << "]";
        }
        else
            cout << ", " << endl << " ";

    }
    cout << endl;
}