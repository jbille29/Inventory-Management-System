/*
This will hold my permanent data for now, until
I figure out a better place to put it.
*/


#pragma once
#include <vector>
#include "Buyer.h"
#include "InventoryItem.h"
#include "Supplier.h"

// This is like the Admin class or data management
// because it holds all the instances that we need. That only admin will be able to edit, except parts or suppliers.
// There may be too many unrelated methods where we want to create Manager classes like WarehouseManager, which would have static methods.
class DummyClass
{
private:
	// These all need to be saved to memory.
	std::vector<Buyer> buyers;
	std::vector<InventoryItem> items;
	std::vector<Supplier> suppliers;
	
	
public:
	DummyClass();
	~DummyClass();
};

