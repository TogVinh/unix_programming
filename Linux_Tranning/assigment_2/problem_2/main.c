#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *pFile = NULL;
    char fileName[255] = {'0'};
    char writeFile[255];

    // in thong bao
    printf("Program name is: %s\n", argv[0]);

    if (argc < 3)
    {
        printf("No argument passed through command line.\n");
    }
    else
    {

        strcpy(fileName,argv[1]);
        strcpy(writeFile,argv[2]);
        pFile = fopen(fileName, "w+");
        if (pFile == NULL)
        {
            printf("Unsucessfully \n");
            exit(1);
        }

        // write to file
        fputs(writeFile, pFile);
        printf("write to file is done !!\n");

    }


    fclose(pFile);
    return 0;
}