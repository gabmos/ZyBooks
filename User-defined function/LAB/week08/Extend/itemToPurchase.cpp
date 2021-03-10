#include <iostream>
#include <string>
#include "ItemToPurchase.h"
using namespace std;

ItemToPurchase::ItemToPurchase() {
itemName = "none";
itemDescription = "none";
itemPrice = 0;
itemQuantity = 0;

return;
}

ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity) {
itemName = name;
itemDescription = description;
itemPrice = price;
itemQuantity = quantity;

return;
}

void ItemToPurchase::SetName(string name) {
itemName = name;

return;
}

string ItemToPurchase::GetName() const {
return itemName;
}

void ItemToPurchase::SetDescription(string description) {
itemDescription = description;

return;
}

string ItemToPurchase::GetDescription() const {
return itemDescription;
}

void ItemToPurchase::SetPrice(int price) {
itemPrice = price;

return;
}

int ItemToPurchase::GetPrice() const {
return itemPrice;
}

void ItemToPurchase::SetQuantity(int quantity) {
itemQuantity = quantity;

return;
}

int ItemToPurchase::GetQuantity() const {
return itemQuantity;
}

void ItemToPurchase::PrintItemCost() const {
cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << itemQuantity * itemPrice << endl;

return;
}

void ItemToPurchase::PrintItemDescription() const {
cout << itemName << ": " << itemDescription << endl;

return;
}