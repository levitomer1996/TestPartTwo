#pragma once

#ifndef _SHOPPINGITEM_
#define _SHOPPINGITEM_

typedef struct
{
	char* barcode;
	float price;
	int amountInCart;

} ShoppingItem;

void	initShoppingItem(ShoppingItem* pCust);
void	printShoppingItem(ShoppingItem* pCust);

#endif