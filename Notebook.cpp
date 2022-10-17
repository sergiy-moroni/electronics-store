#include "Notebook.h"

Notebook::Notebook(int weight, int batterylife): Appliance(weight), Device(batterylife){}
void Notebook::ShowSpec() {
	cout << "Weight:" << _weight << endl;
	cout << "Battery Life: " << _batterylife << endl;
}
