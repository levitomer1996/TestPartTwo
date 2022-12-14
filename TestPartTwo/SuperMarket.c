#include <cstddef>
#include "SuperMarket.h"
#include "functions.h"

void printSuperMarket(const SuperMarket* superMarket)
{
	printf("Name: %s\n", superMarket->name);
	printf("Address: %s\n", superMarket->adress);
	printf("Number of customers: %d\n", superMarket->numOfCustomers);
	printf("Number of products: %d\n", superMarket->numOfProducts);
}

void initSuperMarket(SuperMarket* pSM)
{
	pSM->name = createDynStr("Please enter Supermarket's name: \n");
	pSM->adress = initSuperMarketAdress();
	pSM->customers = NULL;
	pSM->numOfCustomers = 0;
	pSM->products = NULL;
	pSM->numOfProducts = 0;
	printf("Super market initialized. \n");
}

int addProductToSuperMarket(SuperMarket* pSM, Product* pProd)
{

	return 0;
}
