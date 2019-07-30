/*
This will hold my permanent data for now, until
I figure out a better place to put it.
*/


#pragma once
#include <vector>
#include "Buyer.h"
#include "InventoryItem.h"
#include "Supplier.h"
#include "WareHouse.h"

class DummyClass
{
private:
	// These all need to be saved to memory.
	std::vector<Buyer> buyers;
	std::vector<InventoryItem> items;
	std::vector<Supplier> suppliers;
	std::vector<WareHouse> warehouses;
	
public:
	DummyClass();
	~DummyClass();
};

