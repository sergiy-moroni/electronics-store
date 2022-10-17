#pragma once
#include <iostream>
#include "IElectronics.h"
using namespace std;

class Device: virtual public IElectronics {
public:
	Device(int batterylife);
	virtual void ShowSpec();
protected :
	int _batterylife;
};
class Smartphone final: public Device{

public: 
	Smartphone(int batterylife, float dysplaysize);
	void ShowSpec() override;

private: 
	int _dysplaysize;
};

class Player final : public Device {
public:
	Player(int batterylife, int memorysize);
	void ShowSpec() override;
private:
	int _memorysize;
};
