#include "array.h"

int main()
{

	int num;		 // Elements of Array
	float avrg;		 // Average of Array
	float less_avrg; // The number of all elements less than avrg
	int search_num;	 // The number want to find array

	printf("Input the element of Array : ");
	scanf("%d", &num);

	int arr[num];
	printf("\n Starting input Array\n");

	Input(arr, num);

	printf("Array : \n");
	printf("\t");
	outputArray(arr, num);
	printf("\n--------------------------");

	/*Average of all element in array*/
	avrg = calAverage(arr, num);
	printf("\nThe Average of Array is : %.2f", avrg);

	/*the numbers of element less than average*/
	less_avrg = lessAveg(arr, num);
	printf("\nThe numbers of all element less than average  : %.2f\n", less_avrg);

	/*find value in Array*/
	printf("\nInput the value of element to find : ");
	scanf("%d", &search_num);

	searchIndex(arr, num, search_num);

	/*Array before calling function to odd value to the left */
	printf("\nmove all the even value to the left of array");
	printf("\nArray Befor : ");
	outputArray(arr, num);

	/*Array after calling function to odd value to the left */
	printf("\nArray after : ");
	oddElement(arr, num);
	printf("\n");

	return 0;
}
