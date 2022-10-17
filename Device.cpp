#include "Device.h"

using namespace std;

Device::Device(int batterylife) : _batterylife(batterylife){}
void Device::ShowSpec() {
	cout << "Battery Life: " << _batterylife << endl;
}

Smartphone::Smartphone(int batterylife, float dysplaysize) : Device(batterylife), _dysplaysize(dysplaysize){}
void Smartphone::ShowSpec() {
	cout << "Battery Life: " << _batterylife << endl;
	cout << "Size of Dysplay: " << _dysplaysize << endl;
}

Player::Player(int batterylife, int memorysize) : Device(batterylife), _memorysize(memorysize){}
void Player::ShowSpec() {
	cout << "Battery Life: " << _batterylife << endl;
	cout << "Size of Memory: " << _memorysize << endl;
}

