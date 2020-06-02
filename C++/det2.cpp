#include<iostream>
#include<math.h>
using namespace std;
int main()

{
	int a[6][6], b[6][6], row, col, i, j, C[6][6], D[6][6];
	float detE, E[6][6];
	
	cout << "Enter amount of rows and columns for matrix A (the matrix need to be in square matrix with elements between 2 to 6): ";
	cin >> row >> col;
	while (col == 1)
	{
		cout << "Number of row in the matrix needs to be an integer from 2 to 6. \n";
		cout << "Enter amount of rows and columns for matrix A (the matrix need to be in square matrix with elements between 2 to 6): ";
	cin >> row >> col;
	}
	while (row == 1)
	{
		cout << "Number of column the matrix needs to be an integer from 2 to 6. \n";
		cout << "Enter amount of rows and columns for matrix A (the matrix need to be in square matrix with elements between 2 to 6): ";
	cin >> row >> col;
	}
	while (col != row)
	{
		cout << "Column of matrix not equal to row (the matrix need to be square matrix (row = column)).\n";
		cout << "Enter amount of rows and columns for matrix(between 2 to 6): ";
		cin >> row >> col;

	}
	while (row < 0)
	{
		cout << "Please enter positive integers\n";
		cout << "Enter amount of rows and columns for matrix(between 2 to 6): ";
		cin >> row >> col;
	}
	while (col < 0)
	{
		cout << "Please enter positive integers\n";
		cout << "Enter amount of rows and columns for matrix(between 2 to 6): ";
		cin >> row >> col;
	}
	while (row > 6)
	{
		cout << "The range of rows and column is between 2 to 6\n";
		cout << "Enter amount of rows and columns for matrix(between 2 to 6): ";
		cin >> row >> col;
	}
	while (col > 6)
	{
		cout << "The range of rows and column is between 2 to 6\n";
		cout << "Enter amount of rows and columns for matrix(between 2 to 6): ";
		cin >> row >> col;
	}
	
	cout << "\n Enter elements of matrix A : \n";
	
	for(i = 0; i < row; i++)
		for(j = 0; j< col; j++)
		{
			cout << "Enter element of a" << i+1 << j+1 << " : ";
			cin >> a[i][j];
		}
	cout << "\n Enter elements of matrix B: \n";
	
	for(i = 0;i < row; i++)
		for(j = 0; j < col; j++)
		{
			cout << "Enter element of b" << i+1 << j+1 << " : ";
			cin >> b[i][j];
		}
	cout << "\n A = \n";
	for(i = 0;i < row; i++)
		for(j = 0;j < col; j++)
		{
			cout << " \t " << a[i][j];
			if (j == col - 1)
				cout << endl;
		}
	cout << "\n B = \n";
	for(i = 0;i < row; i++)
		for(j = 0;j < col; j++)
		{
			cout << " \t " << b[i][j];
			if (j == col - 1)
				cout << endl;
		}
		// finding C
	for(i = 0;i < row; i++)
		for(j = 0;j < col; j++)
			C[i][j] = a[i][j] + (2*b[i][j]);
	cout << "\n C = A + 2B = \n";
	for(i = 0;i < row; i++)
		for(j = 0;j < col; j++)
		{
			cout << " \t " << C[i][j];
			if (j == col - 1)
				cout << endl;
		}
		// finding D
	for(i = 0;i < row; i++)
		for(j = 0;j < col; j++)
			D[i][j] = b[j][i];
			
	cout << "\n D = transpose of matrix B = \n";
	for(i = 0;i < row; i++)
		for(j = 0;j < col; j++)
		{
			cout << " \t " << D[i][j];
			if(j == row - 1)
				cout << endl;
		}
		// finding E
	for(i = 0;i < row; i++)
		for(j = 0;j < col; j++)
			E[i][j] = a[i][j] * D[i][j];
			
	cout << "\n E = A * B^T = A * D = \n";
	for(i = 0;i < row; i++)
		for(j = 0;j < col; j++)
		{
			cout << " \t " << E[i][j];
			if(j == col - 1)
				cout << endl;
		}
		// finding detE
		if(i == 2)
			detE = E[0][0]*E[1][1] - E[1][0]*E[0][1];
		else if(i == 3)
			detE = E[0][0]*((E[1][1]*E[2][2]) - (E[2][1]*E[1][2])) -E[0][1]*(E[1][0]*E[2][2] - E[2][0]*E[1][2]) + E[0][2]*(E[1][0]*E[2][1] - E[2][0]*E[1][1]);
		else if(i == 4)
			detE = E[0][3] * E[1][2] * E[2][1] * E[3][0] - E[0][2] * E[1][3] * E[2][1] * E[3][0] -E[0][3] * E[1][1] * E[2][2] * E[3][0] + E[0][1] * E[1][3] * E[2][2] * E[3][0] +E[0][2] * E[1][1] * E[2][3] * E[3][0] - E[0][1] * E[1][2] * E[2][3] * E[3][0] -E[0][3] * E[1][2] * E[2][0] * E[3][1] + E[0][2] * E[1][3] * E[2][0] * E[3][1] +E[0][3] * E[1][0] * E[2][2] * E[3][1] - E[0][0] * E[1][3] * E[2][2] * E[3][1] -E[0][2] * E[1][0] * E[2][3] * E[3][1] + E[0][0] * E[1][2] * E[2][3] * E[3][1] +E[0][3] * E[1][1] * E[2][0] * E[3][2] - E[0][1] * E[1][3] * E[2][0] * E[3][2] -E[0][3] * E[1][0] * E[2][1] * E[3][2] + E[0][0] * E[1][3] * E[2][1] * E[3][2] +E[0][1] * E[1][0] * E[2][3] * E[3][2] - E[0][0] * E[1][1] * E[2][3] * E[3][2] -E[0][2] * E[1][1] * E[2][0] * E[3][3] + E[0][1] * E[1][2] * E[2][0] * E[3][3] +E[0][2] * E[1][0] * E[2][1] * E[3][3] - E[0][0] * E[1][2] * E[2][1] * E[3][3] -E[0][1] * E[1][0] * E[2][2] * E[3][3] + E[0][0] * E[1][1] * E[2][2] * E[3][3];
		else if(i == 5)
			cout << "it is";
		else
			cout << "too hard";
			
	cout << "detE =  \n" << detE;
	
		// finding inverse of E
	int k;
	float ratio,z;
	for(i = 0; i < row; i++)
	{
        for(j = row; j < 2*row; j++)
		{
            if(i==(j-row))
                E[i][j] = 1.0;
            else
                E[i][j] = 0.0;
        }
    }
    for(i = 0; i < row; i++)
	{
        for(j = 0; j < row; j++)
		{
            if(i!=j){
                ratio = E[j][i]/E[i][i];
                for(k = 0; k < 2*row; k++)
				{
                    E[j][k] -= ratio * E[i][k];
                }
            }
        }
    }
    for(i = 0; i < row; i++){
        z = E[i][i];
        for(j = 0; j < 2*row; j++){
            E[i][j] /= z;
        }
    }
    cout << "The inverse matrix is: \n";
    for(i = 0; i < row; i++)
	{
        for(j = row; j < 2*row; j++)
		{
            cout << " " << E[i][j];
            printf("\t");
        }
        printf("\n");
    }
	return(0);
}

