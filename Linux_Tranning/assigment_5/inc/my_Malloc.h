#ifndef _my_Malloc_H_
#define _my_Malloc_H_

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

char memory[20000];

/*the structure definition to contain metadata of each block*/
struct block
{
    size_t size; /*size of block */
    int Free; /*this is used to know whether the block described
            by the metadata structure is free or not
            -> if free, set to 1*/
    struct block *next; /*point to the next metadata block*/
};

/*pointing to the main block which is free*/
struct block *freeList = (void *)memory;

/*!
* @brief <Initializing the block of memory>
*
*return None
*/
void initialize();

/*!
* @brief <Making way for a new block allocation by splitting a free block>
*
* @param  fitting <the pointer point to fitting slot alloction>
*
* @param  size <size of alloction>
*
*return None
*/
void split(struct block *fitting, size_t size);

/*!
* @brief <the Function malloc>
*
* @param  Bytes <the pointer point to fitting slot alloction>
*
*return None
*/
void *myMalloc(size_t Bytes);

/*!
* @brief <this is to merge the consecutive free block by remove 
*           the metadata block in the middle>
*
*return None
*/
void merge();

/*!
* @brief <the free function>
*
* @param  *ptr <the pointer that have point to the malloc allocation>
*
*return None
*/
void myFree(void *ptr);

#endif
