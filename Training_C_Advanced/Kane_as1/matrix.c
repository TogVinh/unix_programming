#include "matrix.h"

/*FUNCTION=================================================================
*  Funtion Name : Matrix_Input
*  Description  : Input the element of matrix
==========================================================================*/
void matrixInput(int *p_arr, int row, int col)
{
	int row_index, col_index; // loop variable

	for (row_index = 0; row_index < row; row_index++)
	{
		for (col_index = 0; col_index < col; col_index++)
		{
			printf("a[%d][%d] =  ", row_index, col_index);
			scanf("%d", (p_arr + row_index * row + col_index));
		}
	}
}

/*FUNCTION=================================================================
*  Funtion Name : Matrix_Print
*  Description  : Print the matrix to the terminal
==========================================================================*/
void matrixPrint(int *p_arr, int row, int col)
{
	int row_index, col_index; // Loop variable

	for (row_index = 0; row_index < row; row_index++)
	{
		for (col_index = 0; col_index < col; col_index++)
		{
			printf("%d   ", *(p_arr + row_index * row + col_index));
		}
		printf("\n");
	}
}

/*FUNCTION=================================================================
*  Funtion Name : Sum
*  Description  : Calculate the sumation/addition of two matrices
==========================================================================*/
void Sum(int *p_arrA, int *p_arrB, int row, int col, int *p_arrsum)
{

	/*loop variable */
	int row_index, col_index; // loop variable

	for (row_index = 0; row_index < row; row_index++)
	{
		for (col_index = 0; col_index < col; col_index++)
		{
			*(p_arrsum + row_index * row + col_index) = 
			*(p_arrA + row_index * row + col_index) + *(p_arrB + row_index * row + col_index);
		}
	}
}

/*FUNCTION================================================================
*  Funtion Name : Multiply
*  Description  : Calculate the Multiple of two matrices
=========================================================================*/
void Multiply(int *p_arrA, int *p_arrB, int row, int col, int general, int *p_arrmul)
{

	int row_index = 0; // loop variable to count row of matrix
	int col_index = 0; // loop variable to count colums of matrix
	int index = 0;	   // loop variable to count index of Multiply matrix

	for (row_index = 0; row_index < row; row_index++)
	{
		for (col_index = 0; col_index < col; col_index++)
		{
			// value of one element in Multi matrix
			int matrix_element = 0;

			for (index = 0; index < general; index++)
			{
				matrix_element += *(p_arrA + row_index * row + index) * *(p_arrB + index * row + col_index);
			}

			// element in row i col j of arr_M
			*(p_arrmul + row_index * row + col_index) = matrix_element;
		}
	}
}

/*FUNCTION===============================================================
*  Funtion Name : check_Sum
*  Description  : check the addition condition of two matrices
*  return true/false
========================================================================*/
bool checkSum(int rowA, int colA, int rowB, int colB)
{
	if ((rowA == rowB) && (colA == colB))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

/*FUNCTION===============================================================
*  Funtion Name : check_AB
*  Description  : check the multiplication condition of Matrix A and B
*  return true/false
========================================================================*/
bool checkAmultiB(int colA, int rowB)
{
	if (colA == rowB)
	{
		return 1;
	}

	else
	{
		return 0;
	}
}

/*FUNCTION===============================================================
*  Funtion Name : check_AB
*  Description  : check the multiplication condition of Matrix B and A
*  return true/false
========================================================================*/
bool checkBmultiA(int rowA, int colB)
{
	if (rowA == colB)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

/*======================================================================
*  Funtion Name : show_Output
*  Description  : check and show output of program
========================================================================*/
void Output(int *p_arrA, int *p_arrB, int rowA, int colA, int rowB, int colB)
{
	bool sum_AB, mul_AB, mul_BA;

	/*check each calculation condition*/
	sum_AB = checkSum(rowA, colA, rowB, colB);
	mul_AB = checkAmultiB(colA, rowB);
	mul_BA = checkBmultiA(rowA, colB);

	int *p_arrsum = NULL; // Sum of matrices

	int *p_arrmul = NULL; // Multiply of matrices

	/*printf the result of conditions*/

	if (sum_AB == 1) // the condition of matrices's Sum
	{
		printf("\nMatrix A and Matrix B can add together \n");
	}
	else
	{
		printf("\nMatrix A and Matrix B can not add together \n");
	}

	if (mul_AB == 1)
	{
		printf("Matrix A and Matrix B can multi together \n");
	}
	else
	{
		printf("Matrix A and matriX B can not multi together \n");
	}

	if (mul_BA == 1)
	{
		printf("Matrix B and Matrix A can multi together \n");
	}
	else
	{
		printf("Matrix B and Matrix A can not multi together \n ");
	}

	/*Print the matrix A and matrix B*/
	printf("\n----- Matrix A : -----\n");
	matrixPrint(p_arrA, rowA, colA);

	printf("\n----- Matrix B -----\n");
	matrixPrint(p_arrB, rowB, colB);

	printf("\nMatrix A + Matrix B:\n");

	/*print the result*/
	if (sum_AB == 1)
	{
		p_arrsum = (int *)malloc(rowA * colA * sizeof(int));
		Sum(p_arrA, p_arrB, rowA, colB, p_arrsum);
		matrixPrint(p_arrsum, rowA, colA);
		free(p_arrsum);
	}
	else
	{
		printf("N/A\n");
	}

	printf("\nMatrix A * Matrix B:\n");
	if (mul_AB == 1)
	{
		p_arrmul = (int *)malloc(rowA * colB * sizeof(int));
		Multiply(p_arrA, p_arrB, rowA, colB, colA, p_arrmul);
		matrixPrint(p_arrmul, rowA, colB);
		free(p_arrmul);
	}
	else
	{
		printf("N/A\n");
	}

	printf("\nMatrix B * Matrix A:\n");
	if (mul_BA == 1)
	{

		p_arrmul = (int *)malloc(rowB * colA * sizeof(int));
		Multiply(p_arrB, p_arrA, rowB, colA, colB, p_arrmul);
		matrixPrint(p_arrmul, rowB, colA);
		free(p_arrmul);
	}
	else
	{
		printf("N/A\n");
	}
}
