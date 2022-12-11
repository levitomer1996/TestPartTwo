#pragma once

#ifndef _SHOPPINGITEM_
#define _SHOPPINGITEM_

typedef struct
{
	int houseNumber;
	char* street;
	char* city;

} ShoppingItem;

void	initShoppingItem(ShoppingItem* pCust);
void	printShoppingItem(ShoppingItem* pCust);

#endif