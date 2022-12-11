#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


#include "Address.h"

#define MAX_LENGTH 99


char* createDynStr(const char* msg)
{
	char* str;
	char temp[100];
	printf("Enter %s: ", msg);
	fgets(temp, sizeof(temp), stdin);

	str = (char*)malloc((strlen(temp) + 1) * sizeof(char));
	if (!str)
		return NULL;
	strcpy(str, temp);

	return str;
}
void	initAddress(Address* pAd)
{
	pAd->city = createDynStr("Please enter city name: \n");
	pAd->street =  createDynStr("Please enter street name: \n");
	printf("Please enter house numebr: \n");
	scanf_s("%d", &pAd->houseNumber);
	

}


void printAddress(const Address* pAd)
{
	printf("street %s city %s number % d\n", pAd->street, pAd->city, pAd->houseNumber);
}


//char* getStrExactLength()
//{
//	char* theStr = NULL;
//	int len;
//	char inpStr[MAX_LENGTH];
//
//	//printf("Enter a String:");
//	fgets(inpStr, sizeof(inpStr), stdin);
//	len = strlen(inpStr) + 1;
//	theStr = (char*)malloc(len * sizeof(char));
//		if (theStr != NULL)
//			strcpy(theStr, inpStr);
//
//		//for (int i = 0; i < len; ++i) {
//		//	printf("%c", theStr[i]);
//		//}
//		return theStr;
//}