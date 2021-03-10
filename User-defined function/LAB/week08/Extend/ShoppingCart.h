#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <string>
#include <vector>
#include "ItemToPurchase.h"
using namespace std;

class ShoppingCart {
public:
ShoppingCart();
ShoppingCart(string customerName, string currentDate);
string GetCustomerName() const;
string GetDate() const;
void AddItem(ItemToPurchase item);
void RemoveItem(string itemName);
void ModifyItem(ItemToPurchase item);
int GetNumItemsInCart() const;
int GetCostOfCart() const;
void PrintTotal() const;
void PrintDescriptions() const;

private:
string customerName;
string currentDate;
vector<ItemToPurchase> cartItems;
};

#endif