#include <iostream>

using namespace std;

int menu();


int main() {


int opcion = menu();
switch (opcion){
	case 1:{
		
		break;
}
	case 2:{
		  
		break;
	}
	case 3:{
		  	cout << "Saliendo del menu........" << endl;
		break;
	}
}

	return 0;
}
int menu() {
	int opcion;
	cout << "-----------|||MENU|||------------" << endl;
	cout << "1. Ejercicio 1" << endl;
	cout << "2. Ejercicio 2" << endl;
	cout << "3. Opcion de Salida del menu" << endl;
	cout << "------------|||||||||------------" << endl;
	cout << endl;
	cout << "Ingrese la opcion deseada: ";
	cin >> opcion;
	cout << endl;
	return opcion;
}