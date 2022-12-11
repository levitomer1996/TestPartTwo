#include "functions.h"

#include <stdio.h>
#include <ctype.h>


char* createDynStr(const char* msg)
{
	char* str;
	char temp[100];
	printf("Enter %s: ", msg);
	fgets(str, sizeof(temp), stdin);

	str = (char*)malloc((strlen(temp) + 1) * sizeof(char));
	if (!str)
		return NULL;
	strcpy(str, temp);

	return str;
}
