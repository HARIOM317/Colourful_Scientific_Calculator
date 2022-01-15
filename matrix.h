#include <bits/stdc++.h>
#include "trigonometric.h"

using namespace std;

void matrix_sum(int, int, char);
void matrix_substraction(int, int, char);
void matrix_multiplication(int, int, int, int, char);
void matrix_division(int, int, char, float);
int rank_matrix(int, int);
void swap(int, int, int);
void read(int, int);
void display(int, int);
void rank_of_matrix(char);
void inverse_matrix(char);
void transpose_of_matrix(char);
void identity_matrix(char);
void symmetric_matrix(char);
float determinant(float, int);
void determinant_of_matrix(char);
void adjoint_of_matrix(char);

int a[10][10], i, j, m, n;

void matrix()
{
    char option, choice;
    int row, column, row1, column1, row2, column2;
    float number;
    system("CLS");
start:
    cout << "\033[94;1m  ___________________________________________________________________ \n"
         << "\033[94;1m |       [Select any option for continue]                            | \n"
         << "\033[96;1m |                                                                   | \n"
         << "\033[96;1m | a. Sum of matrix.                                                 | \n"
         << "\033[96;1m | b. Substraction of matrix.                                        | \n"
         << "\033[96;1m | c. Product of matrix.                                             | \n"
         << "\033[96;1m | d. Division of matrix.                                            | \n"
         << "\033[96;1m | e. Determinant of matrix.                                         | \n"
         << "\033[96;1m | f. Adjoint of matrix (For 2x2 or 3x3 matrix).                     | \n"
         << "\033[96;1m | g. Rank of matrix.                                                | \n"
         << "\033[96;1m | h. Inverse of matrix (For only 3x3 matrix).                       | \n"
         << "\033[96;1m | i. Transpose of matrix.                                           | \n"
         << "\033[96;1m | j. Check or print identity matrix.                                | \n"
         << "\033[96;1m | k. Check that given matrix is symmetric or skew symmetric matrix. | \n"
         << "\033[96;1m | x. For back.                                                      | \n"
         << "\033[96;1m | q. For quiet...                                                   | \n"
         << "\033[94;1m |                                                                   | \n"
         << "\033[94;1m |___________________________________________________________________| \n";

    cin >> option;
    if (option == 'a' || option == 'A')
    {
        matrix_sum(row, column, choice);
    }
    else if (option == 'b' || option == 'B')
    {
        matrix_substraction(row, column, choice);
    }
    else if (option == 'c' || option == 'C')
    {
        matrix_multiplication(row1, column1, row2, column2, choice);
    }
    else if (option == 'd' || option == 'D')
    {
        matrix_division(row, column, choice, number);
    }
    else if (option == 'e' || option == 'E')
    {
        determinant_of_matrix(choice);
    }
    else if (option == 'f' || option == 'F')
    {
        adjoint_of_matrix(choice);
    }
    else if (option == 'g' || option == 'G')
    {
        rank_of_matrix(choice);
    }
    else if (option == 'h' || option == 'H')
    {
        inverse_matrix(choice);
    }
    else if (option == 'i' || option == 'I')
    {
        transpose_of_matrix(choice);
    }
    else if (option == 'j' || option == 'J')
    {
        identity_matrix(choice);
    }
    else if (option == 'k' || option == 'K')
    {
        symmetric_matrix(choice);
    }
    else if (option == 'x' || option == 'X')
    {
        system("cls");
        home();
    }
    else if (option == 'q' || option == 'Q')
    {
        cout << "Quieting...\n";
        exit(0);
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void matrix_sum(int row, int column, char choice)
{
    system("cls");
start:
    cout << "\033[92;1m  _________________________ \n"
         << "\033[92;1m |                         |\n"
         << "\033[92;1m | Enter 'x' for back..    |\n"
         << "\033[92;1m | Enter 'q' for quite..   |\n"
         << "\033[92;1m | Enter 'c' for continue..|\n"
         << "\033[92;1m |_________________________|\n\n";
    cin >> choice;

    if (choice == 'x' || choice == 'X')
    {
        system("cls");
        matrix();
    }
    else if (choice == 'q' || choice == 'Q')
    {
        exit(0);
    }
    else if (choice == 'c' || choice == 'C')
    {
        system("cls");
        cout << "\033[92;1m Enter number of rows:  ";
        cin >> row;
        cout << "\033[92;1m Enter number of columns:  ";
        cin >> column;
        float matrix1[row][column];
        float matrix2[row][column];
        float matrix_ans[row][column];
        cout << "\033[96;1m \nEnter elements of first matrix: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cin >> matrix1[i][j];
            }
        }
        cout << endl;
        cout << "\033[96;1mEnter elements of second matrix: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cin >> matrix2[i][j];
            }
        }
        system("cls");
        cout << "\n\n";
        cout << "Sum of matrix is: "
             << "\n\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                matrix_ans[i][j] = matrix1[i][j] + matrix2[i][j];
                cout << matrix_ans[i][j] << "  ";
            }
            cout << "\n\n";
        }
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void matrix_substraction(int row, int column, char choice)
{
    system("cls");
start:
    cout << "\033[92;1m  _________________________ \n"
         << "\033[92;1m |                         |\n"
         << "\033[92;1m | Enter 'x' for back..    |\n"
         << "\033[92;1m | Enter 'q' for quite..   |\n"
         << "\033[92;1m | Enter 'c' for continue..|\n"
         << "\033[92;1m |_________________________|\n\n";
    cin >> choice;

    if (choice == 'x' || choice == 'X')
    {
        system("cls");
        matrix();
    }
    else if (choice == 'q' || choice == 'Q')
    {
        exit(0);
    }
    else if (choice == 'c' || choice == 'C')
    {
        system("cls");
        cout << "\033[92;1m Enter number of rows:  ";
        cin >> row;
        cout << "\033[92;1m Enter number of columns:  ";
        cin >> column;
        float matrix1[row][column];
        float matrix2[row][column];
        float matrix_ans[row][column];
        cout << "\033[96;1m \nEnter elements of first matrix: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cin >> matrix1[i][j];
            }
        }
        cout << endl;
        cout << "\033[96;1mEnter elements of second matrix: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cin >> matrix2[i][j];
            }
        }
        system("cls");
        cout << "\n\n";
        cout << "Substraction of matrix is: "
             << "\n\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                matrix_ans[i][j] = matrix1[i][j] - matrix2[i][j];
                cout << matrix_ans[i][j] << "  ";
            }
            cout << "\n\n";
        }
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void matrix_multiplication(int row1, int column1, int row2, int column2, char choice)
{
    system("cls");
start:
    cout << "\033[92;1m  _________________________ \n"
         << "\033[92;1m |                         |\n"
         << "\033[92;1m | Enter 'x' for back..    |\n"
         << "\033[92;1m | Enter 'q' for quite..   |\n"
         << "\033[92;1m | Enter 'c' for continue..|\n"
         << "\033[92;1m |_________________________|\n\n";
    cin >> choice;

    if (choice == 'x' || choice == 'X')
    {
        system("cls");
        matrix();
    }
    else if (choice == 'q' || choice == 'Q')
    {
        exit(0);
    }
    else if (choice == 'c' || choice == 'C')
    {
        system("cls");
        int sum = 0;
        cout << "\033[92;1mEnter number of 'rows' and 'columns' (For 'Matrix 1'):  ";
        cin >> row1 >> column1;
        float matrix1[row1][column1];
        cout << "\033[96;1m \nEnter elements of first matrix: " << endl;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                cin >> matrix1[i][j];
            }
        }
        cout << endl;
        cout << "\033[92;1mEnter number of 'rows' and 'columns' (For 'Matrix 2'):  ";
        cin >> row2 >> column2;
        float matrix2[row2][column2];
        cout << "\033[96;1m \nEnter elements of second matrix: " << endl;
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                cin >> matrix2[i][j];
            }
        }
        system("cls");
        cout << "\n\n";
        float matrix_ans[row1][column2];
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                for (int k = 0; k < column1; k++)
                {
                    sum += matrix1[i][k] * matrix2[k][j];
                }
                matrix_ans[i][j] = sum;
                sum = 0;
            }
            cout << "\n\n";
        }
        if (row1 == column2)
        {
            cout << "Product of matrix is: "
                 << "\n\n";
            for (int i = 0; i < row1; i++)
            {
                for (int j = 0; j < column2; j++)
                {
                    cout << matrix_ans[i][j] << "  ";
                }
                cout << "\n\n";
            }
            cout << "\n\n";
        }
        else
        {
            cout << "\033[95;40;1m  =============================================================  \n"
                 << "\033[95;40;1m |                                                             | \n"
                 << "\033[91;40;1m | Product is not possible of both entered matrix by you!...   | \n"
                 << "\033[95;40;1m |                                                             | \n"
                 << "\033[95;40;1m  =============================================================  \n\n";
        }
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void matrix_division(int row, int column, char choice, float number)
{
    system("cls");
start:
    cout << "\033[92;1m  _________________________ \n"
         << "\033[92;1m |                         |\n"
         << "\033[92;1m | Enter 'x' for back..    |\n"
         << "\033[92;1m | Enter 'q' for quite..   |\n"
         << "\033[92;1m | Enter 'c' for continue..|\n"
         << "\033[92;1m |_________________________|\n\n";
    cin >> choice;

    if (choice == 'x' || choice == 'X')
    {
        system("cls");
        matrix();
    }
    else if (choice == 'q' || choice == 'Q')
    {
        exit(0);
    }
    else if (choice == 'c' || choice == 'C')
    {
        system("cls");
        cout << "\033[92;1m Enter number of rows:  ";
        cin >> row;
        cout << "\033[92;1m Enter number of columns:  ";
        cin >> column;
        float matrix[row][column];
        cout << "\033[96;1m \nEnter elements of the matrix: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cin >> matrix[i][j];
            }
        }
        cout << endl;
        cout << "\033[94;1mEnter number for division :  ";
        cin >> number;

        system("cls");
        cout << "\033[93;1mDivision of matrix is: "
             << "\n\n";

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                float result = matrix[i][j] / number;
                cout << result << "  ";
            }
            cout << "\n\n";
        }

        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void read(int r, int c)
{
    cout << "\n\nEnter " << r << "x" << c << " order matrix value (Row by rows): \n\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
}

void display(int r, int c)
{
    cout << "\n\033[34;1mMatrix is: " << endl
         << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
}

void swap(int r1, int r2, int c)
{
    int t;
    for (i = 0; i < c; i++)
    {
        t = a[r1][i];
        a[r1][i] = a[r2][i];
        a[r2][i] = t;
    }
}

int rank_matrix(int r1, int c1)
{
    int i, j, k;
    float ratio;
    for (i = 0; i < c1; i++)
    {
        cout << "\n\n\033[92;1m Step: " << i + 1 << endl;
        display(m, n);
        if (a[i][i] != 0)
            for (j = 0; j < r1; j++)
                if (j != i)
                {
                    ratio = a[j][i] / a[i][i];
                    for (k = 0; k < c1; k++)
                        a[j][k] -= ratio * a[i][k];
                }
                else
                    cout << endl;
        else
        {
            for (j = i + 1; j < r1; j++)
                if (a[j][i] != 0)
                {
                    swap(i, j, c1);
                    break;
                }
            if (j == r1)
            {
                c1--;
                for (j = 0; j < r1; j++)
                {
                    a[j][i] = a[j][c1];
                }
            }
            i--;
        }
    }
    return c1;
}

void rank_of_matrix(char choice)
{
    system("cls");
start:
    cout << "\033[92;1m  _________________________ \n"
         << "\033[92;1m |                         |\n"
         << "\033[92;1m | Enter 'x' for back..    |\n"
         << "\033[92;1m | Enter 'q' for quite..   |\n"
         << "\033[92;1m | Enter 'c' for continue..|\n"
         << "\033[92;1m |_________________________|\n\n";
    cin >> choice;

    if (choice == 'x' || choice == 'X')
    {
        system("cls");
        matrix();
    }
    else if (choice == 'q' || choice == 'Q')
    {
        exit(0);
    }
    else if (choice == 'c' || choice == 'C')
    {
        system("cls");
        int rnk;
        cout << "\033[93;1mEnter order of matrix (Rows and Columns size): ";
        cin >> m >> n;
        read(m, n);
        display(m, n);
        rnk = rank_matrix(m, n);
        cout << "\033[92;1m  ______________________________________________ \n"
             << "\033[92;1m |                                              |\n"
             << "\033[92;1m     The rank of above matrix is :  " << rnk << "\n"
             << "\033[92;1m |______________________________________________|\n\n";
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void inverse_matrix(char choice)
{
    system("cls");
start:
    cout << "\033[92;1m  _________________________ \n"
         << "\033[92;1m |                         |\n"
         << "\033[92;1m | Enter 'x' for back..    |\n"
         << "\033[92;1m | Enter 'q' for quite..   |\n"
         << "\033[92;1m | Enter 'c' for continue..|\n"
         << "\033[92;1m |_________________________|\n\n";
    cin >> choice;
    if (choice == 'x' || choice == 'X')
    {
        system("cls");
        matrix();
    }
    else if (choice == 'q' || choice == 'Q')
    {
        exit(0);
    }
    else if (choice == 'c' || choice == 'C')
    {
        system("cls");
        int i, j;
        float mat[3][3];
        float determinant = 0;
        cout << "\033[91;40;1m\nEnter elements of 3x3 matrix: \n\n";
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cin >> mat[i][j];
            }
        }
        system("cls");
        cout << "\033[93;1m\nGiven matrix is: \n\n";
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
        for (i = 0; i < 3; i++)
        {
            determinant = determinant + (mat[0][i] * (mat[1][(i + 1) % 3] * mat[2][(i + 2) % 3] - mat[1][(i + 2) % 3] * mat[2][(i + 1) % 3]));
        }
        cout << "\033[92;1m \t\t  ______________________________________________   \n"
             << "\033[92;1m \t\t |                                              |  \n"
             << "\033[96;1m \t\t             Determinant is :  " << determinant << "\n"
             << "\033[92;1m \t\t |______________________________________________| \n\n";

        if (determinant == 0)
        {
            cout << "\033[95;40;1m \t\t  ====================================================================   \n"
                 << "\033[95;40;1m \t\t |                                                                    |  \n"
                 << "\033[93;40;1m \t\t |  Inverse is not possible of given matrix because determinant is 0  |  \n"
                 << "\033[95;40;1m \t\t |                                                                    |  \n"
                 << "\033[95;40;1m \t\t  ==================================================================== \n\n";
        }
        else
        {
            cout << "\033[93;1m\n\nInverse of matrix is: \n\n";
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    cout << ((mat[(j + 1) % 3][(i + 1) % 3] * mat[(j + 2) % 3][(i + 2) % 3]) - (mat[(j + 1) % 3][(i + 2) % 3] * mat[(j + 2) % 3][(i + 1) % 3])) / determinant << "  ";
                }

                cout << "\n";
            }
        }

        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void transpose_of_matrix(char choice)
{
    system("cls");
start:
    cout << "\033[92;1m  _________________________ \n"
         << "\033[92;1m |                         |\n"
         << "\033[92;1m | Enter 'x' for back..    |\n"
         << "\033[92;1m | Enter 'q' for quite..   |\n"
         << "\033[92;1m | Enter 'c' for continue..|\n"
         << "\033[92;1m |_________________________|\n\n";
    cin >> choice;
    if (choice == 'x' || choice == 'X')
    {
        system("cls");
        matrix();
    }
    else if (choice == 'q' || choice == 'Q')
    {
        exit(0);
    }
    else if (choice == 'c' || choice == 'C')
    {
        int row, column, i, j;
        cout << "\033[94;1m \nEnter order of matrix: ";
        cin >> row >> column;
        int mat[row][column], trans_mat[column][row];
        cout << "\033[91;40;1m \nEnter elements of matrix : \n\n";
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < column; ++j)
            {
                cin >> mat[i][j];
            }
        }

        system("cls");
        cout << "\n\n";
        cout << "\033[92;40;1m      ____________________  \n"
             << "\033[92;40;1m     |                    | \n"
             << "\033[93;40;1m     | Entered Matrix:    | \n"
             << "\033[92;40;1m     |____________________| \n\n";

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < column; ++j)
            {
                cout << " " << mat[i][j];
            }
            cout << endl;
        }

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < column; ++j)
            {
                trans_mat[j][i] = mat[i][j];
            }
        }

        cout << "\n\n";
        cout << "\033[92;40;1m      ______________________  \n"
             << "\033[93;40;1m     |                      | \n"
             << "\033[93;40;1m     | Transpose of Matrix: | \n"
             << "\033[92;40;1m     |______________________| \n\n";

        for (int i = 0; i < column; ++i)
        {
            for (int j = 0; j < row; ++j)
            {
                cout << " " << trans_mat[i][j];
            }
            cout << endl;
        }
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void identity_matrix(char choice)
{
    system("cls");
start:
    cout << "\033[92;1m  _________________________ \n"
         << "\033[92;1m |                         |\n"
         << "\033[92;1m | Enter 'x' for back..    |\n"
         << "\033[92;1m | Enter 'q' for quite..   |\n"
         << "\033[92;1m | Enter 'c' for continue..|\n"
         << "\033[92;1m |_________________________|\n\n";
    cin >> choice;
    if (choice == 'x' || choice == 'X')
    {
        system("cls");
        matrix();
    }
    else if (choice == 'q' || choice == 'Q')
    {
        exit(0);
    }
    else if (choice == 'c' || choice == 'C')
    {
    start2:
        char option;
        cout << "\033[91;40;1m  __________________________________________________________________ \n"
             << "\033[91;40;1m |                 [Select any option for continue]                 |\n"
             << "\033[91;40;1m |                                                                  |\n"
             << "\033[91;40;1m |   Enter 'c' for check that matrix is 'IDENTITY MATRIX' or not!   |\n"
             << "\033[91;40;1m |   Enter 'P' for print the NxN 'IDENTITY MATRIX'!                 |\n"
             << "\033[91;40;1m |   Enter 'x' for back...                                          |\n"
             << "\033[91;40;1m |__________________________________________________________________|\n\n";
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            system("cls");
            int i, j, m, n, flag = 0;
            cout << "\033[32;1m \n\nEnter number of rows and columns : ";
            cin >> m >> n;
            if (m != n)
            {
                cout << "\033[92;1m  ================================ \n"
                     << "\033[92;1m |                                |\n"
                     << "\033[92;1m | Matrix is not a square matrix! |\n"
                     << "\033[92;1m |                                |\n"
                     << "\033[92;1m  ================================\n\n";
                goto start2;
            }
            float A[m][n];
            cout << "\033[93;1m \nEnter Matrix elements : " << endl;
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    cin >> A[i][j];
                }
            }

            cout << "\033[91;40;1m \n\nENTERED MATRIX IS :  \n\n";

            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    cout << A[i][j] << " ";
                }
                cout << "\n ";
            }

            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    if ((A[i][j] != 1) && (A[j][i] != 0))
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag == 0)
            {
                system("cls");
                cout << "\n\n";
                cout << "\033[93;1m  ======================================== \n"
                     << "\033[93;1m |                                         |\n"
                     << "\033[93;1m | The given Matrix is an identity matrix! |\n"
                     << "\033[93;1m |                                         |\n"
                     << "\033[93;1m  =========================================\n\n";
                goto start2;
            }
            else
            {
                system("cls");
                cout << "\n\n";
                cout << "\033[93;1m  ============================================= \n"
                     << "\033[93;1m |                                             |\n"
                     << "\033[93;1m | The given Matrix is not an identity matrix! |\n"
                     << "\033[93;1m |                                             |\n"
                     << "\033[93;1m  =============================================\n\n";
                goto start2;
            }
        }
        else if (option == 'p' || option == 'P')
        {
            system("cls");
            int size, row, column;
            cout << "\033[95;1mEnter order(size) of identity matrix :  ";
            cin >> size;
            cout << "\033[96;1m \n";
            for (row = 0; row < size; row++)
            {
                for (column = 0; column < size; column++)
                {
                    // Checking if row is equal to column
                    if (row == column)
                        cout << 1 << " ";
                    else
                        cout << 0 << " ";
                }
                cout << endl;
            }
            goto start2;
        }
        else if (option == 'x' || option == 'X')
        {
            system("cls");
            goto start;
        }
        else
        {
            system("cls");
            cout << "\033[36;40;1m  ______________  \n"
                 << "\033[36;40;1m |              | \n"
                 << "\033[36;40;1m |Invalid Input | \n"
                 << "\033[36;40;1m |______________| \n";
            goto start2;
        }
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void symmetric_matrix(char choice)
{
    system("cls");
start:
    cout << "\033[92;1m  _________________________ \n"
         << "\033[92;1m |                         |\n"
         << "\033[92;1m | Enter 'x' for back..    |\n"
         << "\033[92;1m | Enter 'q' for quite..   |\n"
         << "\033[92;1m | Enter 'c' for continue..|\n"
         << "\033[92;1m |_________________________|\n\n";
    cin >> choice;
    if (choice == 'x' || choice == 'X')
    {
        system("cls");
        matrix();
    }
    else if (choice == 'q' || choice == 'Q')
    {
        exit(0);
    }
    else if (choice == 'c' || choice == 'C')
    {
        system("cls");
        int row, column, i, j, flag1 = 0, flag2 = 0;

        cout << "\033[33;1m \nEnter number of rows and columns of matrix: ";
        cin >> row >> column;
        if (row != column)
        {
            cout << "\033[92;1m  ================================ \n"
                 << "\033[92;1m |                                |\n"
                 << "\033[92;1m | Matrix is not a square matrix! |\n"
                 << "\033[92;1m |                                |\n"
                 << "\033[92;1m  ================================ \n\n";
            goto start;
        }
        else
        {
            int mat[row][column], trans_mat[column][row];

            cout << "\033[36;1m\n\nEnter elements of matrix: " << endl
                 << endl;

            for (int i = 0; i < row; ++i)
            {
                for (int j = 0; j < column; ++j)
                {
                    cin >> mat[i][j];
                }
            }

            system("cls");
            cout << "\033[36;1m \n\nEntered Matrix is : " << endl;
            for (int i = 0; i < row; ++i)
            {
                for (int j = 0; j < column; ++j)
                {
                    cout << " " << mat[i][j];
                }
                cout << endl;
            }

            for (int i = 0; i < row; ++i)
                for (int j = 0; j < column; ++j)
                {
                    trans_mat[j][i] = mat[i][j];
                }

            cout << "\033[32;1m \n\nTranspose of Matrix: " << endl
                 << endl;
            for (int i = 0; i < column; ++i)
            {
                for (int j = 0; j < row; ++j)
                {
                    cout << " " << trans_mat[i][j];
                }
                cout << endl;
            }

            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    if (mat[i][j] != trans_mat[i][j])
                    {
                        flag1 = 1;
                        break;
                    }
                    else if (mat[i][j] == -trans_mat[i][j])
                    {
                        flag2 = 1;
                        break;
                    }
                }
            }
            if (flag1 == 0)
            {
                cout << "\n\n";
                cout << "\033[92;1m  ================================= \n"
                     << "\033[92;1m |                                 |\n"
                     << "\033[92;1m |   This is a symmetric matrix!   |\n"
                     << "\033[92;1m |                                 |\n"
                     << "\033[92;1m  ================================= \n\n";
                goto start;
            }
            else if (flag2 == 1)
            {
                cout << "\n\n";
                cout << "\033[92;1m  ================================== \n"
                     << "\033[92;1m |                                  |\n"
                     << "\033[92;1m | This is a skew symmetric matrix! |\n"
                     << "\033[92;1m |                                  |\n"
                     << "\033[92;1m  ================================== \n\n";
                goto start;
            }
            else
            {
                cout << "\n\n";
                cout << "\033[92;1m  ====================================================== \n"
                     << "\033[92;1m |                                                      |\n"
                     << "\033[92;1m | This is neither symmetric nor skew-symmetric matrix! |\n"
                     << "\033[92;1m |                                                      |\n"
                     << "\033[92;1m  ====================================================== \n\n";
                goto start;
            }
        }
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

float determinant(float matrix[10][10], int n)
{
    float det = 0;
    float submatrix[10][10];
    if (n == 2)
        return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
    else
    {
        for (int x = 0; x < n; x++)
        {
            int subi = 0;
            for (int i = 1; i < n; i++)
            {
                int subj = 0;
                for (int j = 0; j < n; j++)
                {
                    if (j == x)
                        continue;
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det = det + (pow(-1, x) * matrix[0][x] * determinant(submatrix, n - 1));
        }
    }
    return det;
}

void determinant_of_matrix(char choice)
{
    system("cls");
start:
    cout << "\033[92;1m  _________________________ \n"
         << "\033[92;1m |                         |\n"
         << "\033[92;1m | Enter 'x' for back..    |\n"
         << "\033[92;1m | Enter 'q' for quite..   |\n"
         << "\033[92;1m | Enter 'c' for continue..|\n"
         << "\033[92;1m |_________________________|\n\n";
    cin >> choice;
    if (choice == 'x' || choice == 'X')
    {
        system("cls");
        matrix();
    }
    else if (choice == 'q' || choice == 'Q')
    {
        exit(0);
    }
    else if (choice == 'c' || choice == 'C')
    {
        system("cls");
        int n, i, j;
        cout << "\033[92;1m \nEnter the size of the matrix:  ";
        cin >> n;
        float matrix[10][10];
        cout << "\033[93;1m \n\nEnter the elements of the matrix:\n\n";
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }
        system("cls");
        cout << "\033[96;1m \n\nThe entered matrix is: \n\n"
             << endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        cout << "\n\n";
        cout << "\033[92;1m  ====================================== \n"
             << "\033[92;1m |                                      |\n"
             << "\033[92;1m    Determinant of the matrix is: " << determinant(matrix, n) << "\n"
             << "\033[92;1m |                                      |\n"
             << "\033[92;1m  ====================================== \n\n";
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void adjoint_of_matrix(char choice)
{
    system("cls");
start:
    cout << "\033[92;1m  _________________________ \n"
         << "\033[92;1m |                         |\n"
         << "\033[92;1m | Enter 'x' for back..    |\n"
         << "\033[92;1m | Enter 'q' for quite..   |\n"
         << "\033[92;1m | Enter 'c' for continue..|\n"
         << "\033[92;1m |_________________________|\n\n";
    cin >> choice;
    if (choice == 'x' || choice == 'X')
    {
        system("cls");
        matrix();
    }
    else if (choice == 'q' || choice == 'Q')
    {
        exit(0);
    }
    else if (choice == 'c' || choice == 'C')
    {
        system("cls");
        int j, i, size, A1, A2, A3, A4, A5, A6, A7, A8, A9, d, B1, B2, B3, B4;
        cout << "\033[92;1m \nEnter size of matrix:  ";
        cin >> size;
        float a[size][size];
        float A[size][size];

        if (size == 2)
        {
            cout << "\033[93;1m \n\nEnter matrix elements: \n\n";
            for (i = 1; i <= size; i++)
            {
                for (j = 1; j <= size; j++)
                {
                    cin >> a[i][j];
                }
            }
            system("cls");
            cout << "\033[96;1m  \nGiven matrix is: \n\n";
            for (i = 1; i <= size; i++)
            {
                for (j = 1; j <= size; j++)
                {
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
            B1 = a[1][1];
            B2 = a[1][2];
            B3 = a[2][1];
            B4 = a[2][2];
            cout << "\033[93;1m \n\nAdjoint of matrix is: \n\n";
            cout << B4 << " " << -B2 << "\n"
                 << -B3 << " " << B1;

            d = a[1][1] * a[2][2] - a[1][2] * a[2][1];
            cout << "\n\n";
            cout << "\033[92;1m  ______________________________________ \n"
                 << "\033[92;1m |                                      |\n"
                 << "\033[92;1m    Determinant of the matrix is: " << d << "\n"
                 << "\033[92;1m |______________________________________|\n\n";
        }
        else if (size == 3)
        {
            cout << "\033[93;1m \n\nEnter matrix elements: \n\n";
            for (i = 1; i <= size; i++)
            {
                for (j = 1; j <= size; j++)
                {
                    cin >> a[i][j];
                }
            }
            system("cls");
            cout << "\033[96;1m  \nGiven matrix is: \n\n";
            for (i = 1; i <= size; i++)
            {
                for (j = 1; j <= size; j++)
                {
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
            A1 = (a[2][2] * a[3][3] - a[3][2] * a[2][3]);
            A2 = (a[2][3] * a[3][1] - a[2][1] * a[3][3]);
            A3 = (a[2][1] * a[3][2] - a[3][1] * a[2][2]);
            A4 = (a[1][3] * a[3][2] - a[1][2] * a[3][3]);
            A5 = (a[1][1] * a[3][3] - a[1][3] * a[3][1]);
            A6 = (a[1][2] * a[3][1] - a[1][1] * a[3][2]);
            A7 = (a[1][2] * a[2][3] - a[1][3] * a[2][2]);
            A8 = (a[1][3] * a[2][1] - a[1][1] * a[2][3]);
            A9 = (a[1][1] * a[2][2] - a[1][2] * a[2][1]);
            cout << "\033[93;1m \n\nAdjoint of matrix is: \n\n";
            cout << A1 << " " << A4 << " " << A7 << "\n"
                 << A2 << " " << A5 << " " << A8 << "\n"
                 << A3 << " " << A6 << " " << A9 << endl;

            d = a[1][1] * (a[2][2] * a[3][3] - a[2][3] * a[3][2]) - a[1][2] * (a[2][1] * a[3][3] - a[3][1] * a[2][3]) + a[1][3] * (a[2][1] * a[3][2] - a[2][2] * a[3][1]);
            cout << "\n\n";
            cout << "\033[92;1m  ______________________________________ \n"
                 << "\033[92;1m |                                      |\n"
                 << "\033[92;1m    Determinant of the matrix is: " << d << "\n"
                 << "\033[92;1m |______________________________________|\n\n";
        }

        else
        {
            system("cls");
            cout << "\033[36;40;1m  ______________________________  \n"
                 << "\033[36;40;1m |                              | \n"
                 << "\033[36;40;1m | Please enter 2 or 3 in size! | \n"
                 << "\033[36;40;1m |______________________________| \n";
        }
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}