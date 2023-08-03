#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
    pid_t child;
    int count = 2;

    printf("gia tri cua count = %d", count);
    // create process
    child = fork();

    if (child >= 0)
    {
        if (child == 0)
        {
            printf("\nchild process \n");
            printf("PID : %d \n", getpid());
        }
        else{
            printf("\n Parent process \n");
            printf("PID : %d\n", getpid());
        }
    }
    else
    {
        printf("\nUnsuccessesfully \n");
    }

    return 0;
}