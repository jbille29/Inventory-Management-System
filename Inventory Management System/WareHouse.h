#pragma once
#include <vector>
#include "Bin.h"
class WareHouse
{
private:
	std::vector<Bin> bins;

public:
	WareHouse();
	~WareHouse();
};

