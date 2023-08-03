#include<scanDir.h>


int main( int argc, char *argv[] )
{
    if (argc != 2)
    {
        printf("wrong input \n");
        exit;
    }
    printf("---------------start scan---------------\n");

    printDirectory(argv[1], 0);

    printf("\n----------------Done------------------\n");
    return 0;
}