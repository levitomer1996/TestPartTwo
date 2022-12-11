#pragma once

#ifndef _SHOPPINGCART_
#define _SHOPPINGCART_

#include "ShoppingItem.h"

typedef struct
{
	int houseNumber;
	char* street;
	char* city;

} ShoppingCart;

void	initShoppingCart(ShoppingCart* pCust);
void	printShoppingCart(ShoppingCart* pCust);

#endif