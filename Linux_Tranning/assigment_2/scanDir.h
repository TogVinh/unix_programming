#ifndef _scanDir_H_
#define _scanDir_H_

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void printDirectory(char *path, int depth);

#endif