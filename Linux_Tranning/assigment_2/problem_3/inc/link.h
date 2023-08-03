#ifndef _Link_H_
#define _Link_H_
/*======================================================================
*  include the Library
========================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#define MAX 20

/*!
* @brief <Create a Soft Link>
*
* @param  pathfile[In] <the path of file>
*
* @param  nameSyml[In] <name of Soft link>
*
*return None
*/
void softLink(char *pathfile, char *nameSyml);

/*!
* @brief <Create a Hard Link>
*
* @param  pathfile[In] <the path of file>
*
* @param  nameHardl[In] <name of Hard link>
*
*return None
*/
void hardLink(char *pathfile, char *nameHardl);

#endif