#pragma once
#include <iostream>
#include "Appliance.h"
#include "Device.h"

class Notebook final:public Appliance, Device{
public:
	Notebook(int weight, int batterylife);
	void ShowSpec() override;
};
