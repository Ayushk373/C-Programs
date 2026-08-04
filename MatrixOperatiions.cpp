#include<iostream>
using namespace std;

class Matrix
{
private:
    int row, col;
    int a[10][10];
    
public:
    void readMatrix()
    {
        cout <<  "Enter the number of rows and columns: ";
        cin >> row >> col;

        cout << "Enter matrix elements: \n";
        for(int i = 0; i < row; i++)
        {
            for(int j =o; j < col; j++)
            {
                cin >> a[i][j];
            }
        }
 
    }

    void displayData()
    {
        for(int i = 0; i < row; i++)
        {
            for(int j =o; j < col; j++)
            {
                cout << a[i][j] << "\t";
        
            }
            cout << endl;
        }
    }

    Matrix addMatrix(Matrix m)
    {
        Matrix temp;

        if(row != m.row || col != m.col) 
        {
            cout << "Addition not possible.\n";
            temp.row = temp.col = 0;
            return temp;
        }
        temp.row = row;
        temp.col = col;

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
            temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }

        return temp;
    }

    Matrix subtractMatrix(Matrix m)
    {
        Matrix temp;

        if(row != m.row || col != m.col) 
        {
            cout << "Subtraction not possible.\n";
            temp.row = temp.col = 0;
            return temp;
        }
        temp.row = row;
        temp.col = col;

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
            temp.a[i][j] = a[i][j] - m.a[i][j];
            }
        }

        return temp;
    }

    Matrix multiplyMatrix(Matrix m)
    {
        Matrix temp;

        if(col != m.col) 
        {
            cout << "SMultiplication not possible.\n";
            temp.row = temp.col = 0;
            return temp;
        }
        temp.row = row;
        temp.col = m.col;

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
            temp.a[i][j] = 0;

                for(int k = 0; k < col; k++)
                {
                    temp.a[i][j] = a[i][j] * m.a[k][j];
                }
            }
        }

        return temp;
    }

    bool isValid;
    {
        return (row > 0 && col > 0);
    }
};

int main()
{
    Matrix A, B, C;

    cout << "Enter first matrix: \n";
    A.readMatrix();

    cout << "Enter second matrix: \n";
    B.readMatrix();

    cout << "\nFirst matrix: \n";
    A.displayMatrix();

    cout << "\nSecond matrix: \n";
    B.displayuMatrix();

    cout << "Addition of Matrices: ";
    C = A.addMatrix(B);
    if (C.isValid())
        C.displayMatrix();

    cout << "Subtraction of Matrices: ";
    C = A.subtractMatrix(B);
    if (C.isValid())
        C.displayMatrix();

    cout << "Multiplication of Matrices: ";
    C = A.multiplyMatrix(B);
    if (C.isValid())
        C.displayMatrix();

return 0;
}