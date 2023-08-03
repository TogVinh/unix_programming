#include "listEmployee.c"

int main()
{
    node *p_head;
    initNode(&p_head);
    input(&p_head);
    int choice = 0;
    
    printf("\n--------------------------\n");
    printf("1 -- arrange ascending salary \n");
    printf("2 -- arrange descanding salary \n");
    printf("3 -- soft by Name \n");
    printf("0 -- Exit ");

    printf("\n Your choice :  ");

    //ascending(&p_head);

    printf("\n----the List of employee----");

    output(p_head);
    
    node *del = p_head;
    while(del != NULL)
    {
        p_head = del->p_next;
        free(del);
        del = p_head;
    }
    //free(p_head);
    return 0;
}