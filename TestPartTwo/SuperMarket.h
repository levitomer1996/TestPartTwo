#pragma once
#include "Customer.h"
#include "Product.h"
#ifndef _SUPERMARKET_
#define _SUPERMARKET_

typedef struct {
	char* name;
	char* adress;
	Customer* customers;
	int numOfCustomers;
	Product** products;
	int numOfProducts;
} SuperMarket;

void printSuperMarket(const SuperMarket* superMarket);

#endif