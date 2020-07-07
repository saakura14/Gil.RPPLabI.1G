#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "notebook.h"
#include "marcas.h"
#include "tipos.h"
#include "servicios.h"
#include "trabajos.h"
#include "clientes.h"
#include "informes.h"
#include "prestamosAsignadosAClientes.h"

#define TAMM 4 // MARCA
#define TAMT 4 //TIPO
#define TAMS 4 //SERVICIO
#define TAMN 10 // NOTEBOOK
#define TAMTR 10 // TRABAJO
#define TAMCLIENTE 10 // CLIENTE
#define TAMPRESTAMOS 10





int main()
{
    eMarca marcas[TAMM] = {{1000, "Compaq"},{1001, "Asus"}, {1002, "Acer"}, {1003, "HP"}};
    eTipo tipos[TAMT] = { {5000, "Gamer"}, {5001, "Disenio"}, {5002, "Ultrabook"}, {5003, "Normalita"} };
    eServicio servicios[TAMS]= { {20000, "Bateria", 250}, {20001, "Antivirus", 300}, {20002, "Actualizacion", 400}, {20003, "Fuente", 600} };


    eNotebook notebooks[TAMN]= {
    								{1,	"Viento",	1000,	5001,	2000,	0, 3},
									{2, "Agua",	1002,	5002,	3000,	0, 2},
									{3,	"Vuelo", 1003,	5000,	3500,	0, 4},
									{4,	"Salto",1000,	5000,	5000,	0, 8},
									{5, "Tierra", 1001,  5003,	4600,	0, 10},
									{6, "Fuego",	 1003,	5003,	3200,	0, 1},
									{7, "Sombra", 1003,  5002,	2600,	0, 9},
									{8, "Espejo",  1002,  5003,	5600,	0, 5},
									{9, "Luz", 1001,	5000,	4900,	0, 7},
									{10, "Oscuridad", 1000,  5001,	3300,	0, 6} };


    eTrabajo trabajos[TAMTR]  ={
    								{1,	2, 20003, {2,4,2020}, 0},
									{2, 3, 20003, {5,6,2004}, 0},
									{3,	1, 20000, {2,10,2005}, 0},
									{4,	1, 20002, {3,2,1995},	0},
									{5, 5, 20002, {6,1,2020},	0},
									{6, 6, 20001, {2,5,2020},	0},
									{7, 8, 20002, {2,5,2020},  0},
									{8, 4, 20000, {3,8,2019},  0},
									{9, 9, 20001, {2,9,2018},  0},
									{10, 10,20000, {9,3,2020}, 0} };

    eCliente clientes[TAMCLIENTE]= {    {1, "Shaoran", 'm', 0},
                                        {2, "Sakura", 'f', 0},
                                        {3, "Tomoyo", 'f', 0},
                                        {4, "Kero", 'm', 0},
                                        {5, "Yue", 'm', 0},
                                        {6, "Mailing", 'f', 0},
                                        {7, "Toya", 'm', 0},
                                        {8, "Yukito", 'm', 0},
                                        {9, "Kinomoto", 'f', 0},
                                        {10, "Li", 'f', 0} };




    Prestamo Prestamo[TAMPRESTAMOS]={
                                        {10,1,10000,3,0,3},
                                        {9,2, 20000,4,0,3},
                                        {8,3, 30000,7,0,3},
                                        {7,4, 40000,9,0,8},
                                        {6,5,  50000,9,0,5},
                                        {5,6, 60000,9,0,4},
                                        {4,7, 70000,12,0,2},
                                        {3,8,80000,12,0,4},
                                        {2,9, 90000,12,0,8},
                                        {1,10, 100000,12,0,6} };
    char confirma;
    char seguir = 's';


    int opcion=0;
    int proximoIdTrabajo = 1;
    int proximoIdNotebook =1;
    int proximoIdCliente = 1;
    int flagAlta=0;
    int flagTrabajo =0;


    //inicializarNotebooks(notebooks, TAMN);
    //inicializarTrabajos(trabajos, TAMTR);


    do{
		switch(menu()){


			case 1:
			if(altaNotebook(proximoIdNotebook, notebooks, TAMN, tipos, TAMT, marcas, TAMM, clientes, TAMCLIENTE) == 1)
                {

					proximoIdNotebook++;
					proximoIdCliente++;
					flagAlta=1;
                }
				mostrarNotebooks(notebooks, TAMN, tipos, TAMT, marcas, TAMM, clientes, TAMCLIENTE);
				system("pause");
				break;
			case 2:
				/*
				if(flagAlta == 0)
                {
                    printf("No se cargo ninguna notebook aun\n");
                    system("pause");
                }else{
                    modificarNotebook(notebooks, TAMN, tipos, TAMT, marcas, TAMM, clientes, TAMCLIENTE);
                }*/

                modificarNotebook(notebooks, TAMN, tipos, TAMT, marcas, TAMM, clientes, TAMCLIENTE);
				break;

			case 3:
			   /* if(flagAlta == 0)
                {
                    printf("No se cargo ninguna notebook aun\n");
                    system("pause");
                }else{
                    bajaNotebook(notebooks, TAMN, tipos, TAMT, marcas, TAMM, clientes, TAMCLIENTE);
                }*/

                bajaNotebook(notebooks, TAMN, tipos, TAMT, marcas, TAMM, clientes, TAMCLIENTE);
				system("pause");
				break;

			case 4:
			   /* if(flagAlta == 0)
                {
                    printf("No se cargo ninguna notebook aun\n");
                    system("pause");
                }else{
                    ordenarNotebooks(notebooks, TAMN, tipos, TAMT, marcas, TAMM, clientes, TAMCLIENTE);
                }*/
                ordenarNotebooks(notebooks, TAMN, tipos, TAMT, marcas, TAMM, clientes, TAMCLIENTE);
				system("pause");
				break;

			case 5:
				listarMarcas(marcas, TAMM);
				system("pause");
				break;

			case 6:
				listarTipos(tipos, TAMT);
				system("pause");
				break;

			case 7:
				listarServicios(servicios, TAMS);
				system("pause");
				break;

			case 8:
			  /*
			   if(flagAlta == 0)
                {
                printf("No hay ninguna notebook para cargar un trabajo\n");
                system("pause");
			   }else{
                 if(altaTrabajo(proximoIdTrabajo, notebooks, TAMN, tipos, TAMT, marcas, TAMM, servicios, TAMS, trabajos, TAMTR, clientes, TAMCLIENTE)){
				   proximoIdServicio++;
				   proximoIdTrabajo++;
				   flagTrabajo = 1;
			       }
			   }*/
			   break;
			case 9:
			   /*
			   if(flagTrabajo== 0)
                {
                    printf("No hay trabajos cargados\n");
                    system("pause");
			    }else{
			        mostrarTrabajos(trabajos, TAMTR, notebooks, TAMN, servicios, TAMS);
                    system("pause");
			    }*/
			    mostrarTrabajos(trabajos, TAMTR, notebooks, TAMN, servicios, TAMS);
                system("pause");
				break;
            case 10:
                informeNotebooks(notebooks, TAMN, tipos, TAMT, marcas, TAMM, trabajos, TAMTR, servicios, TAMS, clientes, TAMCLIENTE);
                system("pause");
                break;
			case 11:
				printf("Confirma salida?: Ingrese s o n \n");
				fflush(stdin);
				scanf("%c", &confirma);
				if(confirma == 's')
				{
					seguir = 'n';
				}
				break;

			case 12:
			    printf("Usted ha decido ver informes sobre prestamos asignados al cliente para obtener una pc\n")
                utn_getNumero(&opcion, "Ingrese la opcion deseada:"
                    "1- Cantidad de prestamos otorgados\n"
                    "2- Persona con mas prestamos\n"
                    "3- Préstamo más caro\n"
                    "4- Prestamos por encima del promedio de prestamos\n"
                    "5- Mostrar Prestamos saldados\n"
                    "6- Mostrar Prestamos Activos con cuotas\n"
                    "7- Mostrar la cantidad de prestamos mayores a $1000\n"
                    "8-  Informar prestamos\n"
                    "9- Salir\n", "Error, reingrese", 1, 9, 2);
                    switch(opcion)
                    {

                        case 1:
                            cantidadDePrestamosOtorgados(Prestamo* aPrestamo, int len);
                            break;
                    }

		}//fin switch
    }while(seguir == 's');

    return 0;

}
