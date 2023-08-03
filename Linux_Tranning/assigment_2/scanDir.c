#include<scanDir.h>

void printDirectory(char *path, int depth)
{
    DIR *pDir;
    struct dirent *pEntry;
    struct stat statBuf;

    if ( (pDir = opendir(path)) == NULL )
    {
        printf("Can not open directory \n");
        exit;
    }

    chdir(path);

    while ( (pEntry = readdir(pDir)) != NULL )
    {
        /*Get information of Dir using stat
        * statBuf using to stoge the d_name was geted
        * from Entry(input directory)*/
        stat(pEntry->d_name, &statBuf);
        
        if ( S_ISDIR(statBuf.st_mode) )
        {
            if (strcmp(".", pEntry->d_name) == 0 || 
                strcmp("..",pEntry->d_name) == 0)
            {
                continue;
            }

            printf("%s\n",pEntry->d_name);

            printDirectory(pEntry->d_name, depth+2);
        }
        else
        {
            printf("%s\n",pEntry->d_name);
        }
        
    }
    
    chdir("..");
    closedir(pDir);
}