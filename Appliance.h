#pragma once
#include <iostream>
#include "IElectronics.h"
using namespace std;

class Appliance : virtual public IElectronics{
public:
	Appliance(int weight);
	void ShowSpec() override;

protected:
	int _weight;
};
class Fridge final : public Appliance {
public:
	Fridge(int weight, int volume);
	void ShowSpec() override;

private:
	int _volume;
};
