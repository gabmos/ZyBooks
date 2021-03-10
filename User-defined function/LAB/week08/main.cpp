#include<iostream>

#include<string>

#include "ItemToPurchase.h"

using namespace std;

int main()

{

     //Declaration of ItemToPurchase class objects

     ItemToPurchase item1Cart, item2Cart;

     string itemName;

     //create a variable names like itemPrice

     //itemQuantity,totalCost as type of integer

     int itemPrice;

     int itemQuantity;

     int totalCost = 0;

     //Display statement for Item1

     cout << "Item 1" << endl;

     cout << "Enter the item name:" << endl;

     //call the getline function

     getline(cin, itemName);

     //Display statememt

     cout << "Enter the item price:" << endl;

     cin >> itemPrice;

     cout << "Enter the item quantity:" << endl;

     cin >> itemQuantity;

     item1Cart.SetName(itemName);

     item1Cart.SetPrice(itemPrice);

     item1Cart.SetQuantity(itemQuantity);

     //call cin.ignore() function

     cin.ignore();

     //Display statement for Item 2

     cout << endl;

     cout << "Item 2" << endl;

     cout << "Enter the item name:" << endl;

     getline(cin, itemName);

     cout << "Enter the item price:" << endl;

     cin >> itemPrice;

     cout << "Enter the item quantity:" << endl;

     cin >> itemQuantity;

     item2Cart.SetName(itemName);

     item2Cart.SetPrice(itemPrice);

     item2Cart.SetQuantity(itemQuantity);

     //Display statement
     cout << endl;

     cout << "TOTAL COST" << endl;

     cout << item1Cart.GetName() << " " << item1Cart.GetQuantity() << " @ $" << item1Cart.GetPrice() << " = $" << (item1Cart.GetQuantity()*item1Cart.GetPrice()) << endl;

     cout << item2Cart.GetName() << " " << item2Cart.GetQuantity() << " @ $" << item2Cart.GetPrice() << " = $" << (item2Cart.GetQuantity()*item2Cart.GetPrice()) << endl;

     totalCost = (item1Cart.GetQuantity()*item1Cart.GetPrice()) + (item2Cart.GetQuantity()*item2Cart.GetPrice());

     cout << endl;

     cout << "Total: $" << totalCost << endl;

     return 0;

}