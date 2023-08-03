#ifndef _listEmployee_H_
#define _listEmployee_H_
/*************************************************************************
*  include the Library
*************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/*************************************************************************
*  define 
*************************************************************************/
#define MAX  50

typedef struct Infomation_t
{
	int ID;
	char Full_Name[MAX];
	char Department[MAX];
	int Salary;
	int day;
	int month;
	int year;
}info_t;

struct list_emp_t
{
    info_t emp_t;
    struct list_emp_t *p_next;
};

typedef struct list_emp_t node;



/*!
* @brief <init pointer node head>
*
* @param  pp_head[In] <pointer to point head of Link List>
*
*return None
*/
void initNode (node  **pp_head);


/*!
* @brief <check node is point to NULL>
*
* @param  pp_head[Out] <the pointer to point to head of Lisked List>
*
*return True/False
*/
bool isNull (node **pp_head);


/*!
* @brief <create node in Linked List>
*
* return node
*/
node *createNode();


/*!
* @brief <Insert a new node to Linked List>
*
* @param  pp_head[In] <the pointer to point to node of Lisked List>
*
* @param p_new[In] <pointer to create a newn node>
*
*return None
*/
void insert( node **pp_head, node *p_new );

/*!
* @brief <input the data of node in Link List>
*
* @param pp_head[In] <the pointer to point to node of Lisked List>
*
*return None
*/
void input(node **pp_head);

/*!
* @brief <show the list to screen>
*
* @param  p_head[out] <the pointer to point to node of Lisked List>
*
*return None
*/
void output (node *p_head);

/*!
* @brief <arrange salary in ascending order>
*
* @param  pp_head[In] <the pointer of pointer to point to node of Lisked List>
*
*return None
*/
void ascending(node **pp_head);


/*!
* @brief <arrange salary in descending order>
*
* @param  pp_head[In] <the pointer of pointer to point to node of Lisked List>
*
*return None
*/
void descending (node **pp_head);

/*!
* @brief <arrange by name>
*
* @param  pp_head[In] <the pointer of pointer to point to node of Lisked List>
*
*return None
*/
void softName(node **pp_head);

/*!
* @brief <mode to soft data in Linked List>
*
* @param  pp_head[In] <the pointer of pointer to point to node of Lisked List>
*
*return None
*/
//void softMode(node **p_head);

#endif
/*** end of file ***/