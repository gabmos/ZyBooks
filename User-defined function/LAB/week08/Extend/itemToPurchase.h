#ifndef ITEMTOPURCHASE_H_
#define ITEMTOPURCHASE_H_

#include <iostream>

using namespace std;

class ItemToPurchase
{

private:
       string itemName, itemDescription;
       double itemPrice;
       int itemQuantity;

public:
       ItemToPurchase();
       ItemToPurchase(string name, double price, int quantity, string description);
       void setName(string name);
       void setPrice(double price);
       void setQuantity(int quantity);
       string getName() const;
       double getPrice() const;
       int getQuantity() const;
       void setDescription(string description);
       string getDescription() const;
       void printItemCost();
       void printItemDescription();
};

#endif /* ITEMTOPURCHASE_H_ */