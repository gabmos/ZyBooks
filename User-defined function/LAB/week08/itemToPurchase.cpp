#include <iostream>

#include <string>

#include "ItemToPurchase.h"

using namespace std;

//Implementation of default constructor

ItemToPurchase::ItemToPurchase()

{

     itemName = "none";

     itemPrice = 0;

     itemQuantity = 0;

}

//Implementation of SetName function

void ItemToPurchase::SetName(string name)

{

     itemName = name;

}

//Implementation of SetPrice function

void ItemToPurchase::SetPrice(int itemPrice)

{

     this->itemPrice = itemPrice;

}

//Implementation of SetQuantity function

void ItemToPurchase::SetQuantity(int itemQuantity)

{

     this->itemQuantity = itemQuantity;

}

//Implementation of GetName function

string ItemToPurchase::GetName()

{

     return itemName;

}

//Implementation of GetPrice function

int ItemToPurchase::GetPrice()

{

     return itemPrice;

}

//Implementation of GetQuantity function

int ItemToPurchase::GetQuantity()

{

     return itemQuantity;

}