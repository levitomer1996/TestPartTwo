#pragma once
#pragma once
#ifndef _FUNCTIONS_
#define _FUNCTIONS_
#define MAX_LENGTH 255
#include "SuperMarket.h"
#include "Product.h"

char* createDynStr(const char* msg);
char* formatStr(const char* msg);


//Switch cases Main FUNC
void printSuperMarketProductFunc(const SuperMarket* pSM);
void addProductFunc(Product* pProd);
#endif