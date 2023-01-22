
#include <iostream>
#include <cctype>

using namespace std;

int conmin();
int conmay();

int main() {

	int opcion;

	cout << "Para seleccionar una opcion, ponga el numero que indica despues de cada -> :" << endl;
	cout << "Omitir el uso de espacio, puede usar el simbolo: -,  para hacer un espacio "<<endl;
	system("pause");
	system("cls");

	cout << "Que desea hacer con el texto:" << endl;
	cout<<endl;
	cout << "Convertir de  mayusculas a minusculas: 1" << endl;
	cout << "Convertir de  minusculas a mayusculas: 2" << endl;
	cout << "Salir: 0" << endl;
	cout<<endl;
	cout << "Ingrese la opcion:" << endl;
	cin >> opcion;

	if (opcion == 1)
	{
		system("cls");
		conmin();
	}
	else if (opcion==2)
	{
		system("cls");
		conmay();
	}
	else
	{
		return 0;
	}

}



int conmin() {

	string texto;

	int tamano = 0, opcion;

	cout << "Ingrese el texto:" << endl;
	cin >> texto;
	tamano = texto.size();

	for (int i = 0; i < tamano; ++i)
	{
		texto[i] = tolower(texto[i]);
	}
	cout << "Texto convertido a minúsculas" << endl;
	cout << texto << endl;

	cout << "Regresar : 1" << endl;
	cout << "Salir : 0" << endl;
	cin >> opcion;

	if (opcion == 1)
	{
		system("cls");
		return   main();
	}
	else if (opcion == 0)
	{
		return 0;
	}
	else
	{
		cout << "No se reconoce la opcion" << endl;
		cout << "el programa se cerrara" << endl;
		return 0;
	}
}


int conmay() {

	string texto;

	int tamano = 0, opcion;

	cout << "Ingrese el texto:" << endl;
	cin >> texto;
	tamano = texto.size();

	for (int i = 0; i < tamano; ++i)
	{
		texto[i] = toupper(texto[i]);
	}
	cout << "Texto convertido a mayuscula" << endl;
	cout << texto << endl;


	cout << "Regresar : 1" << endl;
	cout << "Salir : 0"<<endl;
	cin >> opcion;

	if (opcion== 1)
	{
		system("cls");
		return   main();
	}
	else if (opcion==0)
	{
		return 0;
	}
	else
	{
		cout << "No se reconoce la opcion"<<endl;
		cout << "el programa se cerrara" << endl;

		return 0;
	}
}
