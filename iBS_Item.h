//
//  iBS_Item.h
//
//  Created by nash(https://github.com/NashBean) on 1/04/19.
//  Copyright 2019 iBean Software(https://iBeanSoftware.github.io),
//  All rights reserved.
//

#ifndef iBS_ITEM_H
#define iBS_ITEM_H

#include <string>
using namespace std;

// abstract Item class.
const int iBS_ITEM_MAJOR_VERSION = 0;
const int iBS_ITEM_MINOR_VERSION = 1;

namespace iBS 
{
    const int STORE_ID = 0;

    typedef struct Item
    {    
    private:
    	string name;
    	static int id;
        int itemid;
    	int storeid;
    	double price;

    public:
        Item(){};
        Item(string aname, double aprice)
        {
            name = it_name;
            price = it_price;
            itemid = id++;
            storeid = STORE_ID;
        };

        // setter functions
        void setItemName(string aname) { name = aname;}
        void setStoreId(int id) {storeid = id;}
        void setItemPrice(double aprice) {price = aprice;}
        void setItemId(int id) {itemid = id;}

        // getter done functions
        string getItemName() { return name;}
        int getItemId() { return itemid;}
        int getStoreId() { return storeid;}
        double getItemPrice() { return price;}

        // virtual function
        virtual void printProperties() = 0;
    };
}// iBS namespace
#endif // iBS_ITEM_H