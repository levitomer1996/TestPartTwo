#include "SuperMarket.h"

void printSuperMarket(const SuperMarket* superMarket)
{
	printf("Name: %s\n", superMarket->name);
	printf("Address: %s\n", superMarket->adress);
	printf("Number of customers: %d\n", superMarket->numOfCustomers);
	printf("Number of products: %d\n", superMarket->numOfProducts);
}

int addProductToSuperMarket(SuperMarket* pSM, Product* pProd)
{
	return 0;
}
