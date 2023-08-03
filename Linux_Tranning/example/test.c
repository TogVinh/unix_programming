// #include <stdio.h>
// #include <signal.h>
// #include <unistd.h>

// #define MAX_i 10000
// #define DIVISOR 1000
// #define MAX_j 20000

// int main(void)
// {
//     int i;
//     unsigned long j, sum;

//     signal(SIGINT, SIG_IGN);
//     printf("CPU-bound loop started.  Pressing Ctrl-C has no effect....\n");
//     for (i = 1; i <= MAX_i; i++)
//     {
//         sum = 0;
//         for (j = 0; j <= MAX_j; j++)
//             sum += j;
//         if (i % DIVISOR == 0)
//             printf("Iteration %d, sum = %ld\n", i, sum);
//     }
//     printf("Computation is done.\n\n");
//     sleep(5);

//     signal(SIGINT, SIG_DFL);
//     printf("CPU-bound loop restarted.  Pressing Ctrl-C HAS effect now...\n");
//     for (i = 1; i <= MAX_i; i++)
//     {
//         sum = 0;
//         for (j = 0; j <= MAX_j; j++)
//             sum += j;
//         if (i % DIVISOR == 0)
//             printf("Iteration %d, sum = %ld\n", i, sum);
//     }
//     printf("Computation is done.\n");
// }


#include <stdio.h>
#include <signal.h>
#include <unistd.h>

// void ctrap(int sig)
// {
//     puts("Ctrl-C intercepted!");
//     getchar();
//     /* restore the default */
//     (void) signal(SIGINT,SIG_DFL);
// }

int main()
{
    char a = 0;

    
    signal(SIGINT,SIG_IGN);

    while(1)
    {
        printf("\n%d",a);
        a++;
        sleep(1);
    }

    return(0);
}