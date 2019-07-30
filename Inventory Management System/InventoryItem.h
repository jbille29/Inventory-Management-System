#pragma once
#include <string>
class InventoryItem
{
private:
	// need to make sure part numbers are not reused
	int partNumber;
	std::string description;

	// TODO : add more than one supplier, but keep a primary
	// we will want to make suppliers their own class
	std::string primarySupplier;
	// TODO: add co
	float cost;


public:
	InventoryItem();
	~InventoryItem();
};

