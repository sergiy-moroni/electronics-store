#include "Appliance.h"

Appliance::Appliance(int weight): _weight(weight){}

void Appliance::ShowSpec() {
	cout << "Weight:" << _weight << endl;
}

Fridge::Fridge(int weight, int volume) : Appliance(weight), _volume(volume){}

void Fridge::ShowSpec() {
	cout << "Weight:" << _weight << endl;
	cout << "Volume" << _volume << endl;
}
