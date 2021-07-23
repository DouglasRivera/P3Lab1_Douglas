#include <iostream>
#include <math.h>
using namespace std;

int menu();
void Sumatoria(int);
void Operacion(int);

void Sumatoria(int n){
	double resultado=0;
	for	(int i = 1; i<= n; i++){
		double num = 2.0 * i - 1.0;
		double den = i * (i + 1.0);
		resultado += num/den;
	}
	cout << "S("<< n <<")" << resultado <<endl;
}

void Operacion(int x){
	double resultado = 1.0 / (1.0 + exp(x));
	cout << "f("<< x <<")" << resultado <<endl;
}
int main() {


int opcion = menu();
switch (opcion){
	case 1:{
		int n = 0;
		while (n < 1){
			cout << "Ingrese un numero: ";
			cin >> n;
		}
		Sumatoria(n);
		break;
}
	case 2:{
		  int x = 0;
			cout << "Ingrese un numero: ";
			cin >> x;
		    Operacion(x);
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