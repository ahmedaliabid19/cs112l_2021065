#include <iostream>
using namespace std;

class matrix_op
{
private:
	static int matrix_no;
	int row, col;
	int** arr;
	int matrix[3][3];

public:
	matrix_op()
	{
		row = 0;
		col = 0;

		arr = new int* [row];


		for (int i = 0; i < row; i++)
		{
			arr[i] = new int[col];

			for (int j = 0; j < col; j++)
			{
				arr[i][j] = 0;
			}
		}
		matrix_no++;
	}
	matrix_op (int r ,int c)
	{
		row = r;
		col = c;

		arr = new int*[row];

		
		for (int i = 0; i < row; i++)
		{
			arr[i]=new int [col];
			for (int j = 0; j < col; j++)
			{
				arr[i][j] = 0;
			}
		}
		matrix_no++;
	}

	matrix_op& operator + (matrix_op a)
	{
		/*matrix_op temp;*/
		if (row == a.row && col == a.col)
		{
			matrix_op temp(row,col);

			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					temp.matrix[i][j] = matrix[i][j] + a.matrix[i][j];

				}
			}
			return temp;
		}
		else
		{
			cout << "can not add them as rows and cols are not equal" << endl;
			matrix_op temp;
		}
		
		
	}
	matrix_op& operator - (matrix_op b)
	{
		if (row == b.row && col == b.col)
		{


			matrix_op temp(row, col);

			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					temp.matrix[i][j] = matrix[i][j] - b.matrix[i][j];

				}
			}
			return temp;
		}
		else
		{
			cout << "can not sub them as rows and cols are not equal" << endl;
			matrix_op temp;
		}
	}
	matrix_op& operator * (matrix_op c)
	{
		if (col == c.row)
		{

			matrix_op temp(row, c.col);

			for (int i = 0; i < row; ++i)
				for (int j = 0; j < c.col; ++j)
					for (int k = 0; k < col; ++k)
					{
						temp.matrix[i][j] += matrix[i][k] * c.matrix[k][j];
					}
			return temp;
		}
		else
		{

			cout << "can not multiply them as cols of first matrix id not equal to rows of second matrix" << endl;
			matrix_op temp;
		}
	}

	void in()
	{
		cout << "Enter Elements for matrix " << matrix_no<< " = ";
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cin >> matrix[i][j];

			}
			
		}

	}
	

	friend ostream& operator << (ostream& output, matrix_op& m);

};

ostream& operator << (ostream& output, matrix_op& m)
{
	for (int i = 0; i < m.row; i++)
	{
		for (int j = 0; j < m.col; j++)
		{
			output << m.matrix[i][j] << " ";
		

		}
		cout << endl;
	}
	return output;
}

int matrix_op::matrix_no = 0;

int main()
{
	int row1, row2, col1, col2;
	cout << "Enter rows of matrix 1 = ";
	cin >> row1;
	cout << "Enter columns of matrix 1 = ";
	cin >> col1;

	matrix_op m1(row1,col1);
	m1.in();

	cout << "Enter rows of matrix 2 = ";
	cin >> row2;
	cout << "Enter columns of matrix 2 = ";
	cin >> col2;
	matrix_op m2(row2, col2);
	m2.in();

	

	//Add of matrix's through overloading.....
	if (row1 == row2 && col1 == col2)
	{
		matrix_op m3(row1, col2);

		m3 = m1 + m2;
		cout << m3;
		cout << endl;
	}

	//Sub of matrix's through overloading.....
	if (row1 == row2 && col1 == col2)
	{
		matrix_op m4(row1, col1);
		m4 = m1 - m2;
		cout << m4;
		cout << endl;
	}


	//mul of matrix's through overloading.....

	matrix_op m5(3, 3);
	m5 = m1 * m2;
	cout << m5;
	cout << endl;




	
}
