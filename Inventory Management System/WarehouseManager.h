#pragma once
#include <vector>
#include "WareHouse.h"

class WarehouseManager
{
private:
	std::vector<WareHouse> w;
	static std::vector<int> myInts;
	int i;
public:
	WarehouseManager();
	~WarehouseManager();

	void addWarehouse();
};

