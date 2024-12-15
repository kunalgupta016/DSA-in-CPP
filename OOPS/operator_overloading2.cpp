#include <iostream>
using namespace std;

class Matrix
{
    int arr[3][3];

public:
    // Default constructor
    Matrix()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                arr[i][j] = 0;
            }
        }
    }

    // Constructor with 2D array
    Matrix(int inputArr[3][3])
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                arr[i][j] = inputArr[i][j];
            }
        }
    }

    // Overloading + operator
    Matrix operator+(const Matrix &c)
    {
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.arr[i][j] = arr[i][j] + c.arr[i][j];
            }
        }
        return temp;
    }

    // Overloading - operator
    Matrix operator-(const Matrix &c)
    {
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.arr[i][j] = arr[i][j] - c.arr[i][j];
            }
        }
        return temp;
    }

    // Overloading * operator
    Matrix operator*(const Matrix &c)
    {
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.arr[i][j] = 0; // Initialize to 0
                for (int k = 0; k < 3; k++)
                {
                    temp.arr[i][j] += arr[i][k] * c.arr[k][j];
                }
            }
        }
        return temp;
    }

    // Display matrix
    void show()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
};

int main()
{
    // Initializing matrices
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    Matrix M1(mat1);
    Matrix M2(mat2);

    cout << "Elements of M1:" << endl;
    M1.show();
    cout << "Elements of M2:" << endl;
    M2.show();

    Matrix M3 = M1 + M2;
    cout << "Elements of M1 + M2:" << endl;
    M3.show();

    Matrix M4 = M1 - M2;
    cout << "Elements of M1 - M2:" << endl;
    M4.show();

    Matrix M5 = M1 * M2;
    cout << "Elements of M1 * M2:" << endl;
    M5.show();

    return 0;
}
