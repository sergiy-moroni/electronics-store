#include <iostream>
#include <string>
#include "Notebook.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	IElectronics* Elstore[4];
	Elstore[0] = new Smartphone(10,6.7);
	Elstore[1] = new Player(20, 50);
	Elstore[2] = new Fridge(30, 500);
	Elstore[3] = new Notebook(30, 50);

	bool oper = true;
	while (oper) {

		cout << "Выберите товар: " << endl << "1 - Смартфон" << endl << "2 - Плеер" << endl
			<< "3 - Холодильник" << endl << "4 - Ноутбук" << endl;
		cout << "Введите 0 для выхода" << endl;
		short choice = 0;
		cin >> choice;

		switch (choice) {
		case 1:
			Elstore[0]->ShowSpec();
			break;
		case 2:
			Elstore[1]->ShowSpec();
			break;
		case 3:
			Elstore[2]->ShowSpec();
			break;
		case 4:
			Elstore[3]->ShowSpec();
			break;
		case 0:
			oper = false;
			break;
		default :
			cout << "Введите значение от 1 до 4 или 0 для выхода!" << endl;
			break;
		}
	}
	delete Elstore[3];
	delete Elstore[2];
	delete Elstore[1];
	delete Elstore[0];
	return 0;
}
