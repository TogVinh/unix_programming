#include "my_Malloc.h"

/*the array which is consider the memory*/
char memory[20000];

/*Pointing to the main block of the memory which is free*/
struct block *freeList = (void *)memory;

/*FUNCTION=================================================================
*  Funtion Name : initialize
*  Description  : initialize the allocation
==========================================================================*/
void initialize()
{
    freeList->size = 20000 - sizeof(struct block);
    freeList->Free = 1;
    freeList->next = NULL;
}

/*FUNCTION=================================================================
*  Funtion Name : split
*  Description  : making way for a new block allocation by splitting
*                 a free block
==========================================================================*/
void split(struct block *fitting, size_t size)
{
    struct block *new = (void*)((void*)fitting + size + sizeof(struct block));
    new->size = (fitting->size) - size - sizeof(struct block);
    new->Free = 1;
    new->next = fitting->next;
    fitting->size = size;
    fitting->Free = 0;
    fitting->next = new;
}

/*FUNCTION=================================================================
*  Funtion Name : myMalloc
*  Description  : the malloc function
==========================================================================*/
void *myMalloc(size_t Bytes)
{
    struct block *curr, *prev;
    void *result;
    if (!(freeList->size))
    {
        initialize();
        printf("Memory initialized\n");
    }

    curr = freeList;

    while ((((curr->size) < Bytes) || ((curr->Free) == 0)) && (curr->next != NULL))
    {
        prev = curr;
        curr = curr->next;
        printf("One block checked\n");
    }

    if ((curr->size) == Bytes)
    {
        curr->Free = 0;
        result = (void *)(++curr);
        printf("Exact fitting block allocated\n");
        return result;
    }
    else if ((curr->size) > (Bytes + sizeof(struct block)))
    {
        split(curr, Bytes);
        result = (void *)(++curr);
        printf("Fitting block allocated with a split \n");
        return result;
    }
    else
    {
        result = NULL;
        printf("No sufficient memory to allocate\n");
        return result;
    }
}

/*FUNCTION=================================================================
*  Funtion Name : merge
*  Description  : this is to merge the consecutive free blocks by removing
*                 the metadata block in the middle
==========================================================================*/
void merge()
{
    struct block *curr, *prev;
    curr = freeList;
    while ((curr->next) != NULL)
    {
        if (curr->Free && curr->next->Free)
        {
            curr->size += (curr->next->size) + sizeof(struct block);
            curr->next = curr->next->next;
        }
    }
}

/*FUNCTION=================================================================
*  Funtion Name : myFree
*  Description  : the free function
==========================================================================*/
void myFree(void *ptr)
{
    if (((void *)memory <= ptr) && ((void *)(memory + 20000)))
    {
        struct block *curr = ptr;
        --curr;
        curr->Free = 1;
        merge();
    }
    else
    {
        printf("Let's provide a valid pointer allocated by malloc");
    }
}

void *realloc(void *ptr, unsigned long size)
{
    void *newPtr = malloc(size);
    memcpy(ptr, newPtr, ((struct block *)ptr)->size);
    free(ptr);
    return newPtr;
}

