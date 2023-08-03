#include <link.h>

int main(int argc, char *argv[])
{
    DIR *dir;
    struct dirent *dirp;

    char nameSyml[MAX];  // name of soft link
    char nameHardl[MAX]; // name of hard link

    if (argc != 3)
    {
        printf("follow input as syntax below \n");
        printf("./file_run pathfile file\n");
        return 0;
    }

    if ((dir = opendir(argv[1])) == NULL)
    {
        printf("can't open %s", argv[1]);
        return 1;
    }

    while ((dirp = readdir(dir)) != NULL)
    {
        // find a name in the directory
        if (!strcmp(dirp->d_name, argv[2]))
        {
            printf("%s\n", dirp->d_name);
        }
    }

    
    printf("input name of Soft Link : ");
    scanf("%s", nameSyml);

    printf("input name of Hard Link : ");
    scanf("%s", nameHardl);

    //create link
    softLink(argv[1], nameSyml);
    hardLink(argv[1], nameHardl);

    closedir(dir);
    return 0;
}
