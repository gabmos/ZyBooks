#include <iostream>
#include <string>
#include <vector>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"
using namespace std;

ShoppingCart::ShoppingCart() {
customerName = "none";
currentDate = "January 1, 2016";

return;
}

ShoppingCart::ShoppingCart(string customerName, string currentDate) {
this->customerName = customerName;
this->currentDate = currentDate;

return;
}

string ShoppingCart::GetCustomerName() const {
return customerName;
}

string ShoppingCart::GetDate() const {
return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item) {
cartItems.push_back(item);

return;
}

void ShoppingCart::RemoveItem(string itemName) {
bool found = false;

for (int i = 0; i < cartItems.size(); ++i) {
if ((cartItems.at(i).GetName() == itemName) && (!found)) {
cartItems.erase(cartItems.begin() + i);
found = true;
}
}

if (!found) {
cout << "Item not found in cart. Nothing removed." << endl;
}

return;
}

void ShoppingCart::ModifyItem(ItemToPurchase item) {
bool found = false;
  
for (int i = 0; i < cartItems.size(); ++i) {
string name = cartItems.at(i).GetName();
string description = cartItems.at(i).GetDescription();
int price = cartItems.at(i).GetPrice();
int quantity = cartItems.at(i).GetQuantity();

if ((!found) && (name == item.GetName())) {
if ((description != "none") && (price != 0) && (quantity != 0)) {
item.SetName(name);
item.SetDescription(description);
item.SetPrice(price);
  
cartItems.at(i) = item;
found = true;
}
}
}

if (!found) {
cout << "Item not found in cart. Nothing modified." << endl;
}

return;
}

int ShoppingCart::GetNumItemsInCart() const {
int sum = 0;

for (int i = 0; i < cartItems.size(); ++i) {
sum += cartItems.at(i).GetQuantity();
}

return sum;
}

int ShoppingCart::GetCostOfCart() const {
int sum = 0;
int price;
int quantity;

for (int i = 0; i < cartItems.size(); ++i) {
price = cartItems.at(i).GetPrice();
quantity = cartItems.at(i).GetQuantity();

sum += (price * quantity);
}

return sum;
}

void ShoppingCart::PrintTotal() const {
string name;
int price;
int quantity;
int totalPrice;
int total = 0;

cout << customerName << "'s Shopping Cart - " << currentDate << endl;
cout << "Number of Items: " << GetNumItemsInCart() << endl << endl;

if (cartItems.size() == 0) {
cout << "SHOPPING CART IS EMPTY" << endl;
} else {
for (int i = 0; i < cartItems.size(); ++i) {
name = cartItems.at(i).GetName();
price = cartItems.at(i).GetPrice();
quantity = cartItems.at(i).GetQuantity();
totalPrice = price * quantity;

cout << name << " " << quantity << " @ $" << price << " = $" << totalPrice << endl;

total += totalPrice;
}
}

cout << endl << "Total: $" << total << endl;

return;
}

void ShoppingCart::PrintDescriptions() const {
cout << customerName << "'s Shopping Cart - " << currentDate << endl << endl;
cout << "Item Descriptions" << endl;

for (int i = 0; i < cartItems.size(); ++i) {
cout << cartItems.at(i).GetName() << ": " << cartItems.at(i).GetDescription() << endl;
}

return;
}