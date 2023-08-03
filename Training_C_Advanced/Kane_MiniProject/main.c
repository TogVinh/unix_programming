#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

// remove "\n" form fgets 
#define strcut_newline(str) ((str)[strlen(str) - 1] == '\n')? (str)[strlen(str) - 1] = '\0':0;

uint8_t dot = 46; // dot ascii => char dot = .
uint8_t dash = 45; // dash ascii => char dash = -

/************************************************************
uint8_t alphabet[];



struct node
{
	//data_t data;
	uint8_t data;  // dot and dash
	struct node *p_left;
	struct node *p_right;
};
typedef struct node node_t;

// free the dynamic alocation of node
void Free(node_t *root)
{
    if (root == NULL)
        return;

    Free(root->p_left);
    Free(root->p_right);
    free(root);
}

// if it is the dot, move to the left of tree
int moveLeft ( node_t *root )
{
	return 
}

// if it is the dash, move to the right tree
char moveRight (node_t *root )
{
	return
}

*************************************************/

// read data from a file
void readFile ()
{
	FILE*f_readFile = NULL;
	char filePath[50] = {'0'};
	char arr[1028];

	puts("Enter the path of the file to read : ");
	fgets(filePath, 50, stdin);
    fgets(filePath, 50, stdin);
    strcut_newline(filePath);

	f_readFile = fopen( filePath , "r+" );
	if ( f_readFile == NULL )
	{
		printf("\n Open Error! ");
		return;
	}

	else
	{
		printf(" \nOpen success ");
		printf( "\nPath file :  " );
        //printf("path file : %s", filePath);
        puts(filePath);
		printf("\n Morse code in the file : \n ");
		while ( fgets( arr , 1028 ,f_readFile) )
		{
			printf("%s",arr);
		}
		printf("\n");
	}
	
	fclose (f_readFile);
}

// write data to a file
void writeFile()
{
	FILE *f_writeFile = NULL;
	char filePath[50];

	puts("Enter the path of file to write ");
	fgets(filePath, 50, stdin);
    fgets(filePath, 50, stdin);
    strcut_newline(filePath);

	f_writeFile = fopen( filePath, "w+" );
	if (f_writeFile == NULL)
	{
		printf("\nCan't write to file ");
		return;
	}
	else
	{
		printf("\nghi file thanh cong");
        printf("\npath of file : ");
        //printf("path file : %s", filePath);
        puts(filePath);
	}
	
	fclose(f_writeFile);
}


int main()
{
	
	int choose;
	printf("\n=========== Selection ============\n");
	printf("   Press 1 -- encoding morse code \n");
	printf("   Press 2 -- decoding morse code \n");
	printf("   Press 0 -- exit \n");
	
	do
	{
		printf("\nYour choice -- ");
		scanf("%d", &choose);
		switch(choose)
		{
			case 1:
				//encodingMode();
				printf("Encoding Mode\n");
				readFile();
				break;
			case 2:
				//decodingMode()
				printf("Decoding Mode\n");
				writeFile();
				break;
			case 0:
				break;
			default:
				printf("Wrong! - Input again ");
				break;
		}
	}
	while (choose != 0);
	
	
}