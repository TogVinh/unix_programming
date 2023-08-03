#include "listEmployee.h"

/*FUNCTION=================================================================
*  Funtion Name : initNode
*  Description  : init a head point in Linked List
==========================================================================*/
void initNode (node  **pp_head)
{
    *pp_head = NULL;
}

/*FUNCTION=================================================================
*  Funtion Name : isNull
*  Description  : check the head pointer is point to Null or not
==========================================================================*/
bool isNull (node **pp_head)
{
    return pp_head == NULL;
}

/*FUNCTION=================================================================
*  Funtion Name : createNode
*  Description  : create a new Node and attribute of Node
==========================================================================*/
node *createNode()
{
    node *p_emp = (node*)malloc(sizeof(node));
    printf("\nInput Employee's Name  : ");
    fgets(p_emp->emp_t.Full_Name, MAX, stdin);
    fgets(p_emp->emp_t.Full_Name, MAX, stdin);

    printf("Input ID of Employee     : ");
    scanf("%d",&p_emp->emp_t.ID);

    printf("Input Department         : ");
    fgets(p_emp->emp_t.Department,MAX, stdin);
    fgets(p_emp->emp_t.Department,MAX, stdin);

    printf("Input Salary             : ");
    scanf("%d",&p_emp->emp_t.Salary);

    printf("Input join day           : ");
    scanf("%d",&p_emp->emp_t.day);

    printf("Input join month         : ");
    scanf("%d",&p_emp->emp_t.month);

    printf("Input join year          : ");
    scanf("%d",&p_emp->emp_t.year);

    return p_emp;
}

/*FUNCTION=================================================================
*  Funtion Name : insert
*  Description  : insert a node to Linked List
==========================================================================*/
void insert ( node **pp_head, node *p_new )
{
    if (*pp_head == NULL)
    {
        *pp_head = p_new;
        return;
    }

    p_new->p_next = *pp_head;
    *pp_head = p_new;
}

/*FUNCTION=================================================================
*  Funtion Name : input
*  Description  : input the information of node
==========================================================================*/
void input(node **pp_head)
{
    int num = 0;
    int element = 0; //loop varibale -- the element of Linked List
    printf("Input the number of Employee : ");

    do
    {
        scanf("%d", &num);
        if (num < 1 || num > MAX)
        {
            printf("\nWrong input !!");
            printf("\nLet's input again  : ");
        }
    }
    while ( (num < 1) || (num > MAX) );

    for ( element = 0 ; element < num ; element++ )
    {
        node *p_new = createNode();
        insert(pp_head, p_new);
    }

}

/*FUNCTION=================================================================
*  Funtion Name : output
*  Description  : print the information of Link List
==========================================================================*/
void output (node *p_head)
{
    while (p_head != NULL)
    {
        printf("\nID            : %d",p_head->emp_t.ID);
        printf("\nName          : %s",p_head->emp_t.Full_Name);
        //puts(p_head->emp_t.Full_Name);
        printf("Department    : %s", p_head->emp_t.Department);
        //puts(p_head->emp_t.Department);
        printf("Salary        : %d",p_head->emp_t.Salary);
        printf("\nStart         : %d/%d/%d", p_head->emp_t.day, p_head->emp_t.month, p_head->emp_t.year);
        printf("\n");
        p_head = p_head->p_next;
    }
    
}

/*FUNCTION=================================================================
*  Funtion Name : ascending
*  Description  : arrange salary in ascending order
==========================================================================*/
void ascending(node **pp_head)
{
    node *p_current = NULL;
    node *p_index = NULL;
    int temp = 0;

    if (*pp_head = NULL)
    {
        printf("Empty List\n");
        return;
    }
    else
    {
        p_current = *pp_head;
        while (p_current != NULL)
        {
            p_index = p_current->p_next;
            while(p_index != NULL)
            {
                if(p_current->emp_t.Salary > p_index->emp_t.Salary)
                {
                    temp = p_current->emp_t.Salary;
                    p_current->emp_t.Salary = p_index->emp_t.Salary;
                    p_index->emp_t.Salary = temp;
                }

                p_index = p_index->p_next;
            }

            p_current = p_current->p_next;
        }
    }
    
}

/*FUNCTION=================================================================
*  Funtion Name : ascending
*  Description  : arrange salary in descending order
==========================================================================*/
void descending (node **pp_head)
{
    node *p_current = NULL;
    node *p_index = NULL;
    int temp = 0;
    if (*pp_head = NULL)
    {
        printf("Empty List\n");
        return;
    }
    else
    {
        p_current = *pp_head;
        while (p_current != NULL)
        {
            p_index = p_current->p_next;
            while(p_index != NULL)
            {
                if(p_current->emp_t.Salary < p_index->emp_t.Salary)
                {
                    temp = p_current->emp_t.Salary;
                    p_current->emp_t.Salary = p_index->emp_t.Salary;
                    p_index->emp_t.Salary = temp;
                }

                p_index = p_index->p_next;
            }

            p_current = p_current->p_next;
        }
        output(*pp_head);
    }
}

/*FUNCTION=================================================================
*  Funtion Name : ascending
*  Description  : arrange by Name
==========================================================================*/
void softName(node **pp_head)
{
    node *p_current = NULL;
    node *p_index = NULL;
    char temp[50];
    int compare = 0;
    if (*pp_head = NULL)
    {
        printf("Empty List\n");
        return;
    }

    else
    {
        p_current = *pp_head;
        while (p_current != NULL)
        {
            p_index = p_current->p_next;
            while(p_index != NULL)
            {
                int compare = 0;
                compare = strcmp( p_current->emp_t.Full_Name , p_index->emp_t.Full_Name );
                if ( compare == 1 )
                {
                    strcpy ( temp , p_current->emp_t.Full_Name );
                    strcpy ( p_current->emp_t.Full_Name , p_index->emp_t.Full_Name );
                    strcpy ( p_index->emp_t.Full_Name , temp );
                }
            } 

            p_current = p_current->p_next;
        }
        
    }
}

/*FUNCTION=================================================================
*  Funtion Name : softMode
*  Description  : mode to soft the Linked List
==========================================================================*/
// void softMode(node **p_head)
// {
//     int choice;
//     do
//     {
//         scanf("%d",&choice);
//         switch (choice)
//         {
        
//             case 1:
//                 // soft by salary ascending
//                 ascending(p_head);
                
//                 break;
//             case 2:
//                 // soft by salary descending
//                 descending (p_head);
//                 break;

//             case 3: 
//                 // soft by name
//                 softName(p_head);
//                 break;
            
//             default:
//                 printf("wrong input - repeat your choice : ");
//                 break;
//         }
//     }
//     while ( (choice != 3) || (choice !=1) || (choice != 2) );
// }