#include "my_Malloc.h"

int main()
{
    int *ptr = (int *)myMalloc(100 * sizeof(int));
    if (ptr != NULL)
    {
        printf("Success\n");
    }
    myFree(ptr);
    
}