#include <link.h>

/*FUNCTION=================================================================
*  Funtion Name : softLink
*  Description  : Create a Soft link
==========================================================================*/
void softLink(char *pathfile, char *nameSyml)
{
    int sLink = symlink(pathfile, nameSyml);
    if (sLink == 0)
    {
        printf("Soft Link created successfuly\n");
    }

    else
    {
        printf("Soft Link created Fail \n");
    }
}

/*FUNCTION=================================================================
*  Funtion Name : hardLink
*  Description  : Create a Hard link
==========================================================================*/
void hardLink(char *pathfile, char *nameHardl)
{
    int hLink = link(pathfile, nameHardl);
    if (hLink == 0)
    {
        printf("Hard Link was created succuessfuly \n");
    }
    else
    {
        printf("Hard Link created Fail\n");
    }
}