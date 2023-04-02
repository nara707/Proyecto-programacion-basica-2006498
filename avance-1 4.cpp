#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
	char art[20], gen[20], desc[88], clas[7], con[20];
	int decision, opc, n;
	float pre, tot;
	//en el menu puse 7 y 8 porque a el teclado de la laptop no le sirven esas teclas, solo en el tecado de pantalla pero no me deja abrirlo mientras esta corriendo el codigo ☺♥
	cout << "\n\tMenu\n\t" << endl << "1-.Dar de alta un articulo" << endl << "2-.Modificar un articulo" << endl << "3-.Baja de artuclos" << endl << "4-.Lista de articulos" << endl << "7-.limpiar pantalla" << endl << "8-.salir" << endl;
	cin >> opc;
	switch (opc)
	{
	case 1:
		cout << "ingrese el numero del articulo" << endl;
		cin >> n;

		cout << "ingrese el nombre del articulo que desea dar de alta" << endl;
		cin >> art;

		cout << "ingrese el genero del articulo que desea dar de alta" << endl;
		cin >> gen;

		cout << "Ingrese una descripcion del articulo que deseea dar de alta" << endl;
		cin >> desc;

		cout << "ingrese la clasificacion del articulo que desea dar de alta" << endl;
		cin >> clas;

		cout << "ingrese la consola para el articulo que desea dar de alta" << endl;
		cin >> con;

		cout << "ingrese el precio del articulo que desea dar de alta" << endl;
		cin >> pre;

		tot = pre * 1.16;

		cout << "El precio final del articulo con el iva incluido es de: " << tot << endl;

		cout << "Desea regresar al menu de inicio? 1.si 2.no" << endl;
		cin >> decision;
		if (decision == 1)
		{
			return main();
		}

		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 7:
		system("cls");
		return main();
		break;
	case 8:
		exit(1);
		break;
	}
}