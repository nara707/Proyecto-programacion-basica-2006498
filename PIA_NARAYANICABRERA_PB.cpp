#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <wchar.h>
#include <fstream>
#include <math.h>
#include <stdlib.h>
using namespace std;

struct inventario
{
    int n;
    float pre, tot;
    string status, gen, clas, desc, art, con;
};

int cont, alt;
inventario* Tienda;

void alta();
void eliminar();
void list();
void mod();
void arch();
void abrirarch();

int main()
{
    int opc;
    system("color 0D");
    
    printf("\n");
    printf("%c Menu %c\n", 01, 01);
    printf("1-.Dar de alta un articulo \n");
    printf("2-.Modificar un articulo \n");
    printf("3-.Baja de artuclos \n");
    printf("4-.Lista de articulos \n");
    printf("5-.limpiar pantalla \n");
    printf("6-.salir \n");
    printf("\n");
    printf("Seleccione la opcion que desa del menu: ");
    cin >> opc;

    switch (opc)
    {
    case 1:
    	system("color 03");
        alta();
        return main();
        break;
    case 2:
    	system("color 07");
        mod();
        return main();
        break;
    case 3:
    	system("color 01");
        eliminar();
        return main();
        break;
    case 4:
        list();
        return main();
        break;
    case 5:
        system("cls");
        return main();
        break;
    case 6:
        arch();
        abrirarch();
        exit(0);
        break;
    default:
        cout << "OPCION INEXISTENTE FAVOR DE ESCRIBIR UN VALOR DEL MENU" << endl;
        return main();
        break;
    }
}

void alta()
{
    printf("\nIngrese la cantidad de articulos que desea dar de alta: ");
    scanf("%d", &alt);
    Tienda = new inventario[alt];

    for (int i = 0; i < alt; i++)
    {
        printf("\n");
        printf("Registro %d \n", i + 1);
        printf("\n Ingrese el numero del articulo que desea dar de alta: ");
        scanf("%i", &Tienda[i].n);
        while (getchar() != '\n');

        printf("\n Ingrese el nombre del articulo que desea dar de alta: ");
        getline(cin, Tienda[i].art);

        printf("\n Ingrese el genero del articulo que desea dar de alta: ");
        getline(cin, Tienda[i].gen);

        printf("\n Ingrese la descripcion del articulo que desea dar de alta: ");
        getline(cin, Tienda[i].desc);

        printf("\n Ingrese la clasificacion del articulo que desea dar de alta: ");
        getline(cin, Tienda[i].clas);

        printf("\n Ingresa la consola para el articulo que desea dar de alta: ");
        getline(cin, Tienda[i].con);

        printf("\n Igrese el precio del articulo que desea dar de alta: ");
        scanf("%f", &Tienda[i].pre);
        Tienda[i].tot = Tienda[i].pre * 1.16;
        printf("\n El precio con el IVA incluido es un total de: $ %.2f  \n", Tienda[i].tot);
    }
}

void list()
{
    for (int i = 0; i < alt; i++)
    {
        if (Tienda[i].status == "T-T eliminado T-T")
        {
            printf("registro eliminado X.X %d \n", i + 1);
        }
        else
        {
            printf("\n");
            printf("%c Articulo %d \n", 03, i + 1);
            printf("%c Numero: %d \n", 03, Tienda[i].n);
            printf("%c Nombre: %s \n", 03, Tienda[i].art.c_str());
            printf("%c Genero: %s \n", 03,  Tienda[i].gen.c_str());
            printf("%c Descripcion: %s \n", 03, Tienda[i].desc.c_str());
            printf("%c Clasificacion: %s \n", 03, Tienda[i].clas.c_str());
            printf("%c Consola: %s \n", 03, Tienda[i].con.c_str());
            printf("%c Precio sin IVA: %f \n", 03, Tienda[i].pre);
            printf("%c Precio con IVA: %f \n", 03, Tienda[i].tot);
        }
    }
}

void eliminar()
{
    int j;
    printf("Ingrese el articulo que desea eliminar: \n");
    scanf("%d", &j);
    j = j - 1;

    for (int i = j; i == j; i++)
    {
        printf("Articulo eliminado %d X.X \n", j + 1);
        Tienda[i].status = "T-T eliminado T-T";
        Tienda[i].n = 0;
        Tienda[i].art = " ";
        Tienda[i].gen = " ";
        Tienda[i].desc = " ";
        Tienda[i].clas = " ";
        Tienda[i].con = " ";
        Tienda[i].pre = 0;
    }
}

void mod()
{
    int j, opcion1, opc2;

    do
    {
        printf("\n");
        printf("ingrese el numero del articulo que desa modificar: ");
        scanf("%d", &j);
        j = j - 1;

        if (j < 0 || j >= alt)
        {
            printf("Articulo inexistente UnU. \n");
            return;
        }
        else if ((Tienda[j].status == "T-T eliminado T-T"))
        {
            printf("Articulo eliminado X.X %d \n", j + 1);
            printf("Ingrese un articulo: ");
            opc2 = 1;
        }
        else
        {
            opc2 = 2;
        }
    } while (opc2 == 1);

    //printf("Ingrese el dato que desea modificar: \n 1-.Nombre \n 2-.Numero de articulo\n 3-.Genero\n 4-.Descripcion\n 5-.Clasificacion\n 6-.Consola\n 7-.Precio\n");
    printf("1-.Nombre: %s \n", Tienda[j].art.c_str());
	printf("2-.Numero: %d \n", Tienda[j].n);
    printf("3-.Genero: %s \n", Tienda[j].gen.c_str());
    printf("4-.Descripcion: %s \n", Tienda[j].desc.c_str());
    printf("5-.Clasificacion: %s \n", Tienda[j].clas.c_str());
    printf("6-.Consola: %s \n", Tienda[j].con.c_str());
    printf("7-.Precio sin IVA: %f \n", Tienda[j].pre);
    printf(" \n Ingrese la opcion que desea modificar: ");
	scanf("%d", &opcion1);

    switch (opcion1)
    {
    case 1:
        while (getchar() != '\n');
        printf("Ingrese el nuevo nombre del articulo: ");
        getline(cin, Tienda[j].art);
        break;
    case 2:
        while (getchar() != '\n');
        printf("Ingrese el nuevo nombre para el articulo: ");
        scanf("%d", &Tienda[j].n);
        break;
    case 3:
        while (getchar() != '\n');
        printf("Ingrese el nuevo genero: ");
        getline(cin, Tienda[j].gen);
        break;
    case 4:
        while (getchar() != '\n');
        printf("Ingrese la nueva descripcion: ");
        getline(cin, Tienda[j].desc);
        break;
    case 5:
        while (getchar() != '\n');
        printf("Ingrese la nueva clasificacion: ");
        getline(cin, Tienda[j].clas);
        break;
    case 6:
        while (getchar() != '\n');
        printf("Ingrese la nueva consola: ");
        getline(cin, Tienda[j].con);
        break;
    case 7:
        while (getchar() != '\n');
        printf("Ingrese el nuevo precio: ");
        scanf("%f", &Tienda[j].pre);
        Tienda[j].tot = Tienda[j].pre * 1.16;
        printf("\n El nuevo precio con el IVA incluido es un total de: %.2f  \n", Tienda[j].tot);
        break;
    default:
        printf("OPCION INEXISTENTE FAVOR DE ESCRIBIR UN VALOR DEL MENU\n");
        return;
    }
}

void arch()
{
    ofstream archivo; //clase ofstream para escribir archivos
    string nomarchivo;
    int texto;
    string tex;

    nomarchivo = "alta_articulo.txt";

    archivo.open(nomarchivo.c_str(), ios::out | ios::binary);

    if (archivo.fail())
    {
        printf("ERROR NO SE PUDO CREAR EL ARCHIVO");
        exit(1);
    }

    for (int i = 0; i < alt; i++)
    {
        if (Tienda[i].status == "T-T eliminado T-T")
        {
            tex = "Articulo eliminado X.X";
            texto = i++;
            archivo << tex << texto << "\n";
            archivo<<"**********************" << "\n";
        }
        else
        {
            archivo << "\n" << ">>>ARTICULO: " << (i + 1) << "\n";
            archivo << "\n" << ">NUMERO DE ARTICULO: " << Tienda[i].n << "\n";
            archivo << "\n" << ">NOMBRE: " << Tienda[i].art << "\n";
            archivo << "\n" << ">GENERO: " << Tienda[i].gen << "\n";
            archivo << "\n" << ">DESCRIPCION: " << Tienda[i].desc << "\n";
            archivo << "\n" << ">CLASIFICACION: " << Tienda[i].clas << "\n";
            archivo << "\n" << ">CONSOLA: " << Tienda[i].con << "\n";
            archivo << "\n" << ">PRECIO SIN IVA: " << Tienda[i].pre << "\n";
            archivo << "\n" << ">PRECIO CON IVA: " << Tienda[i].tot << "\n";
            archivo<<"**********************" << "\n";
        }
    }

    archivo.close();
}

void abrirarch()
{
    ifstream archivo("alta_articulo.txt");
    if (archivo.is_open())
    {
        string espacio;
        while (getline(archivo, espacio))
        {
            cout << espacio << endl;
        }

        archivo.close();
        printf("El archivo se abrio correctamente \n");
    }
    else
    {
        printf("El archivo no se pudo abrir T-T \n");
    }
}
