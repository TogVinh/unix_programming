#include "matrix.h"


int main()
{
	int *pArrA = NULL; // Matrix A
	int *pArrB = NULL; // Matrix B
	
	
	int rowA , colA ; // row and colums of matrix A
	int rowB , colB ; // row and colums of matrix B
	
	
	/*Matrix A -- Input row and col*/
	printf("-----Input the information of Matrix A-----\n");
	printf("Row of matrix A : ");
	scanf("%d",&rowA );
	printf("Col of matrix A : ");
	scanf("%d",&colA );
	
	/* dyamic allocation for matrix A */
	pArrA = (int*)malloc( rowA*colA*sizeof(int) );
	
	
	matrixInput(pArrA , rowA , colA );
	
	/*Matrix B -- Input row and col*/
	printf("-----Input the information of Matrix B-----\n");
	printf("Row of matrix B : ");
	scanf("%d",&rowB );
	printf("Col of matrix B : ");
	scanf("%d",&colB );
	
	/* dyamic allocation for matrix B */
	pArrB = (int*)malloc( rowB*colB*sizeof(int) );
	
	matrixInput(pArrB , rowB , colB );
	 
	Output(pArrA , pArrB, rowA, colA, rowB, colB);
	
	/* Free Matrix A and Matrix B */
	free( pArrA );
	free( pArrB );
	
	return 0;
}
