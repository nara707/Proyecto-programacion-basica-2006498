#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <wchar.h>
#include <math.h>
using namespace std;

struct inventario
{
	char art[20], gen[20], clas[7], con[20], desc[100];
	int n;
	float pre, tot;
};
inventario tienda[3];

int main()
{
	
	int opc, decision;
	system("color 0D");
	do
	{

		printf("Menu\n");
		printf("1-.Dar de alta un articulo \n");
		printf("2-.Modificar un articulo \n");
		printf("3-.Baja de artuclos \n");
		printf("4-.Lista de articulos \n");
		printf("5-.limpiar pantalla \n");
		printf("6-.salir \n");
		cin >> opc;

		switch (opc)
		{
		case 1://alta de articulos
			for (int i = 0; i < 3; i++)
			{
				printf("\n ingrese el numero del articulo \n");
				scanf_s("%d", &tienda[i].n);
				cin.ignore();

				printf("\n ingrese el nombre del articulo que desea dar de alta \n");
				gets_s(tienda[i].art);

				printf("\n ingrese el genero del articulo que desea dar de alta \n");
				gets_s(tienda[i].gen);

				printf(" \n Ingrese una descripcion del articulo que deseea dar de alta \n");
				gets_s(tienda[i].desc);

				printf("\n ingrese la clasificacion del articulo que desea dar de alta \n");
				gets_s(tienda[i].clas);

				printf("\n ingrese la consola para el articulo que desea dar de alta \n");
				gets_s(tienda[i].con);

			}
			break;
		case 2:
			printf("Desea regresar al menu de inicio? 1.si 2.no");
			scanf_s("%d",&decision);
			if (decision == 1)
			{
				return main();
			}
			break;
		case 3:
			printf("Desea regresar al menu de inicio? 1.si 2.no");
			scanf_s("%d", &decision);
			if (decision == 1)
			{
				return main();
			}
			break;
		case 4:
			for (int i = 0; i < 3; i++)
			{
				printf("\n NUMERO DE ARTICULO %d \n", tienda[i].n);
				printf("\n NOMBRE DEL ARTICULO %s \n", tienda[i].art);
				printf("\n GENERO DEL ARTICULO %s \n", tienda[i].gen);
				printf("\n DESCRIPCION DEL ARTICULO %s \n", tienda[i].desc);
				printf("\n CLASIFICACION DEL ARTICULO %s \n", tienda[i].clas);
				printf("\n CONSOLA %s \n", tienda[i].con);
				printf("\n Desea regresar al menu de inicio? 1.si 2.no \n");
				scanf_s("%d", &decision);
				if (decision == 1)
				{
					return main();
				}

			}
			break;
		case 5:
			system("cls");
			return main();
			break;
		case 6:
			exit(1);
			break;
		}
	} while (opc != 6);
}