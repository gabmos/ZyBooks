#include <iostream>
#include <string>
#include <vector>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"
using namespace std;

void PrintMenu(ShoppingCart cart);

int main() {
string customerName;
string currentDate;

cout << "Enter customer's name:" << endl;
getline(cin, customerName);
cout << "Enter today's date:" << endl;
getline(cin, currentDate);
ShoppingCart cart1(customerName, currentDate);

cout << endl << "Customer name: " << cart1.GetCustomerName() << endl;
cout << "Today's date: " << cart1.GetDate() << endl;

PrintMenu(cart1);

return 0;
}

void PrintMenu(ShoppingCart cart) {
char choice = '?';
string itemName;
string itemDescription;
int itemPrice;
int itemQuantity;

cout << endl << "MENU" << endl;
cout << "a - Add item to cart" << endl;
cout << "d - Remove item from cart" << endl;
cout << "c - Change item quantity" << endl;
cout << "i - Output items' descriptions" << endl;
cout << "o - Output shopping cart" << endl;
cout << "q - Quit" << endl << endl;

while (choice != 'q') {
cout << "Choose an option:" << endl;
cin >> choice;

if (choice == 'a') {
cin.ignore();

cout << "ADD ITEM TO CART" << endl;
cout << "Enter the item name:" << endl;
getline(cin, itemName);
cout << "Enter the item description:" << endl;
getline(cin, itemDescription);
cout << "Enter the item price:" << endl;
cin >> itemPrice;
cout << "Enter the item quantity:" << endl;
cin >> itemQuantity;
  
ItemToPurchase item(itemName, itemDescription, itemPrice, itemQuantity);
cart.AddItem(item);
  
cout << endl << "MENU" << endl;
cout << "a - Add item to cart" << endl;
cout << "d - Remove item from cart" << endl;
cout << "c - Change item quantity" << endl;
cout << "i - Output items' descriptions" << endl;
cout << "o - Output shopping cart" << endl;
cout << "q - Quit" << endl << endl;
} else if (choice == 'd') {
cin.ignore();

cout << "REMOVE ITEM FROM CART" << endl;
cout << "Enter name of item to remove:" << endl;
getline(cin, itemName);
cart.RemoveItem(itemName);

cout << endl << "MENU" << endl;
cout << "a - Add item to cart" << endl;
cout << "d - Remove item from cart" << endl;
cout << "c - Change item quantity" << endl;
cout << "i - Output items' descriptions" << endl;
cout << "o - Output shopping cart" << endl;
cout << "q - Quit" << endl << endl;
} else if (choice == 'c') {
ItemToPurchase newItem;

cin.ignore();

cout << "CHANGE ITEM QUANTITY" << endl;
cout << "Enter the item name:" << endl;
getline(cin, itemName);
cout << "Enter the new quantity:" << endl;
cin >> itemQuantity;

newItem.SetName(itemName);
newItem.SetQuantity(itemQuantity);
cart.ModifyItem(newItem);

cout << endl << "MENU" << endl;
cout << "a - Add item to cart" << endl;
cout << "d - Remove item from cart" << endl;
cout << "c - Change item quantity" << endl;
cout << "i - Output items' descriptions" << endl;
cout << "o - Output shopping cart" << endl;
cout << "q - Quit" << endl << endl;
} else if (choice == 'i') {
cout << endl << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
cart.PrintDescriptions();

cout << endl << "MENU" << endl;
cout << "a - Add item to cart" << endl;
cout << "d - Remove item from cart" << endl;
cout << "c - Change item quantity" << endl;
cout << "i - Output items' descriptions" << endl;
cout << "o - Output shopping cart" << endl;
cout << "q - Quit" << endl << endl;
} else if (choice == 'o') {
cout << "OUTPUT SHOPPING CART" << endl;
cart.PrintTotal();

cout << endl << "MENU" << endl;
cout << "a - Add item to cart" << endl;
cout << "d - Remove item from cart" << endl;
cout << "c - Change item quantity" << endl;
cout << "i - Output items' descriptions" << endl;
cout << "o - Output shopping cart" << endl;
cout << "q - Quit" << endl << endl;
}
}

return;
}