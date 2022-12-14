#include "functions.h"

#include <stdio.h>
#include <ctype.h>


char* createDynStr(const char* msg)
{
	char* str;
	char temp[MAX_LENGTH];
	printf("Enter %s: ", msg);
	fgets(str, sizeof(temp), stdin);


char* formatStr(const char* msg)
{
	char* str = createDynStr(msg);
	char delim = "#";
	char* token = strtok(str, delim);
	printf("%s", str);
}
