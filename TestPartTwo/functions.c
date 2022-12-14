#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include "SuperMarket.h"
#include "functions.h"




char* createDynStr(const char* msg)
{
	char buffer[MAX_LENGTH]; 
	printf("%s", msg);
	
	getchar();//getChar cleanes the input stream from '\n'
	fgets(buffer, sizeof(buffer), stdin);
	char* dynamicString = malloc(strlen(buffer) + 1);
	strcpy(dynamicString, buffer);
	return dynamicString;
}


char* formatStr(const char* msg)
{
	const char delim[2] = "#";
	char* token = strtok(str, delim);
	char* newString =NULL;
	int pos = 0;
	
	while (token != NULL) {
		printf(" %s", token);
		token = strtok(NULL, delim);
		pos++;
	}
	return newString;
}

//Swtich case in main.
void printSuperMarketProductFunc(const SuperMarket* pSM)
{
	printf("The SuperMarket Products List:\n");
	printSuperMarket(pSM);
}
void addProductFunc(Product* pProd)
{
	printf("Enter the Product you want to add:\n");
	initProduct(pProd);
}

