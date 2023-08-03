#ifndef _matrix_H_
#define _matrix_H_


/*======================================================================
*  include the Library
========================================================================*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*!
* @brief <Create an input the element of matrix>
*
* @param *p_arr[In/Out] <pointer  point to an array containing matrix's elements>
*
* @param row [In] <number of rows of the matrix>
*
* @param col [In] <number of cols of the matrix>
*
*return None
*/
void matrixInput (int *p_arr, int row , int col);

/*!
* @brief <Print an ouput of the element of matrix>
*
* @param *p_arr[In/Out] <pointer  point to an array containing matrix's elements>
*
* @param row [In] <number of rows of the matrix>
*
* @param col [In] <number of cols of the matrix>
*
*return None
*/
void matrixPrint ( int *p_arr, int row , int col);

/*!
* @brief <Calculate the sumation/addition of two matrices>
*
* @param *p_arrA[In/Out] <pointer point to an array containing elements of Matrix A>
*
* @param *p_arrB[In/Out] <pointer point to an array containing elements of Matrix B>
*
* @param row [In] <number of rows of the matrix>
*
* @param col [In] <number of cols of the matrix>
* 
* @param *p_arrsum [OUT] <the pointer point to the Sum Matrix of matrices> 
*
*return None
*/
void Sum(int *p_arrA, int *p_arrB, int row, int col, int *p_arrsum);

/*!
* @brief <Calculate the Multiple of two matrices>
*
* @param *p_arrA[In/Out] <pointer point to an array containing elements of Matrix A>
*
* @param *p_arrB[In/Our] <pointer point to an array containing elements of Matrix B>
*
* @param row [In] <number of rows of the matrix>
*
* @param col [In] <number of cols of the matrix>
*
* @param general [In] <common parameter of two matrices to perform multiplication>
*
* @param *p_arrmul [OUT]  <the pointer point tp multiply matrix of matrices>
*
*return None
*/
void Multiply(int *p_arrA, int *p_arrB, int row, int col, int general, int *p_arrmul);

/*!
* @brief <check the addition condition of two matrices>
*
* @param rowA [In] <number of rows of the matrix A>
*
* @param colB [In] <number of columns of the matrix B>
*
* @param rowB [In] <number of rows of the matrix B>
*
* @param colB [In] <number of columns of the matrix B>
*
*return true/false
*/
bool checkSum( int rowA, int colA, int rowB, int colB );

/*!
* @brief <Check the multiplication condition of Matrix A and B>
*
* @param colA [In] <number of columns of the matrix A>
*
* @param rowB [In] <number of rows of the matrix B>
*
*return true/false
*/
bool checkAmultiB (int colA, int rowB );

/*!
* @brief <Check the multiplication condition of Matrix B and A>
*
* @param rowA [In] <number of rows of the matrix A>
*
* @param colB [In] <number of columns of the matrix B>
*
*return true/false
*/
bool checkBmultiA (int rowA, int colB);

/*!
* @brief <Calculate the sumation/addition of two matrices>
*
* @param *p_arr_A[In/Out] <pointer point to an array containing elements of Matrix A>
*
* @param *arr_B[In/Out] <pointer point to an array containing elements of Matrix B>

* @param rowA [In] <number of rows of the matrix A>
*
* @param colA [In] <number of columns of the matrix A>
*
* @param rowB [In] <number of rows of the matrix B>
*
* @param colB [In] <number of columns of the matrix B>
*
*return None
*/
void Output(int *p_arrA , int *p_arrB, int rowA, int colA, int rowB, int colB);


#endif
