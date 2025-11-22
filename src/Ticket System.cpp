#include<stdio.h>
#include<windows.h>

//###########################################
//###########################################
//##                                       ##  
//##      MENU CINEFIME                    ##  
//##                                       ## 
//##                                       ##  
//##                                       ##  
//###########################################
//###########################################





void menu();
void menu_boletos();
void menu_dulceria();
void menu_final();
void salir();
void fnaf();
void jdh();
void ted();
void chucky();
void combos();
void individual();
void guardarCompras();


int n, pelicula, i, nino, adulto, tercera_edad, a, b, c, e, u, z;
int c1, c2, c3, c4, c5, c6;
int c11, c22, c33, c44, c55, c66;
 int opcion, cantidad;
 
 char nombre[100];
 
int totalNinoBoletos = 0, totalAdultoBoletos = 0, totalTerceraEdadBoletos = 0;
 int totalCombos = 0, totalIndividual = 0;



main()
	{
	printf("###########################################\n");
	printf("###########################################\n");
	printf("## \t \t \t \t \t ## \n");
	printf("## \t \t CINEFIME \t  \t ## \n");
	printf("## \t \t \t \t \t ## \n");
	printf("###########################################\n");
	printf("###########################################\n");
	
	
	printf("Cual es tu nombre? \f");
	scanf("%s", &nombre);
	
	system("cls");
		menu();
	
	}
	
void menu()
{
	
	
	system("cls");
	printf("###########################################\n");
	printf("###########################################\n");
	printf("## \t \t \t \t \t ## \n");
	printf("## \t \t CINEFIME \t  \t ## \n");
	printf("## \t \t \t \t \t ## \n");
	printf("###########################################\n");
	printf("###########################################\n");
	
	printf("\n \n");
	printf("Bienvenido al menu de CINEFIME. \n");
	printf("ESCRIBE LA OPCION A DIRIGIRTE\n");
	printf("\t  1 - CARTELERA \n");
	printf("\t  2 - DULCERIA \n");
	printf("\t  3 - SALIR DEL MENU \n");
	scanf("%d", &n);
	
	if( n == 1)
	{
		menu_boletos();
	}
	else 
	{
		if( n == 2)
		{
			menu_dulceria();
		}
		else
		{
			if( n == 3)
			{
				salir();
			}
			else 
			{
				printf("OPCION INVALIDA, INGRESA DE NUEVI LA OPCION\n");
				menu();
			}
		}
		
	}
	    


}

void menu_boletos()
{
			nino = 50;
			adulto = 100;
			tercera_edad = 50;
			
	system("cls");
	
	printf("ESCRIBE LA OPCION DE PELICULA QUE QUIERAS VER \n");
	printf(" [1] - FIVE NIGHTS AT FREDDY \n");
	printf(" [2] - JUEGOS DEL HAMBRE \n");
	printf(" [3] - TED 2 \n");
	printf(" [4] - CHUCKY \n");
	scanf("%d", &pelicula);
	
		switch (pelicula) {
    case 1:
        fnaf();
        break;
    case 2:
        jdh();
        break;
    case 3:
        ted();
        break;
    case 4:
        chucky();
        break;
    default:
        system("cls");
        printf("OPCION INVALIDA, INGRESA DE NUEVO LA OPCION \n");
        menu_boletos();
        break;
}

	
	
}

void menu_dulceria() {
    system("cls");

    int e;

    do {
        printf("Ingresa la opción a dirigirte: \n");
        printf("[1] - COMBOS \n");
        printf("[2] - INDIVIDUAL \n");
        scanf("%d", &e);

        if (e == 1) {
            combos();
        } else if (e == 2) {
            individual();
        } else {
            system("cls");
            printf("OPCIÓN INVÁLIDA, INGRESA DE NUEVO LA OPCIÓN \n");
        }
    } while (e != 1 && e != 2);
}

void combos()
{


    do {
        system("cls");
        printf(" [1] - PALOMITAS CON REFRESCO \n");
        printf(" [2] - NACHOS CON REFRESCO  \n");
        printf(" [3] - HOT-DOG CON REFRESCO  \n");
        printf(" [4] - PALOMITAS Y NACHOS CON 2 REFRESCO  \n");
        printf(" [5] - PALOMITAS Y HOT-DOG CON 2 REFRESCO  \n");
        printf(" [6] - PALOMITAS, NACHOS Y HOT-DOG CON 2 REFRESCO  \n");
        printf(" [0] - Salir\n");
        scanf("%d", &u);

        switch (u) {
            case 1:
                printf("Cuantos combos de PALOMITAS CON REFRESCO deseas comprar? ");
                scanf("%d", &cantidad);
            	totalCombos += cantidad;

                break;
            case 2:
                printf("Cuantos combos de NACHOS CON REFRESCO deseas comprar? ");
                scanf("%d", &cantidad);
                totalCombos += cantidad;

                break;
            case 3:
                printf("Cuantos combos de HOT-DOG CON REFRESCO deseas comprar? ");
                scanf("%d", &cantidad);
    		    totalCombos += cantidad;

                break;
            case 4:
                printf("Cuantos combos de PALOMITAS Y NACHOS CON 2 REFRESCO deseas comprar? ");
                scanf("%d", &cantidad);
                totalCombos += cantidad;
                break;
            case 5:
                printf("Cuantos combos de PALOMITAS Y HOT-DOG CON 2 REFRESCO deseas comprar? ");
                scanf("%d", &cantidad);
                totalCombos += cantidad;
                break;
            case 6:
                printf("Cuantos combos de PALOMITAS, NACHOS Y HOT-DOG CON 2 REFRESCO deseas comprar? ");
                scanf("%d", &cantidad);
                totalCombos += cantidad;
                break;
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida. Por favor, ingresa una opción válida.\n");
                break;
        }
    } while (u < 0 || u > 6);
    menu();

}


void individual()
{

    do {
        printf("Seleccione una opción individual:\n");
        printf("[1] - PALOMITAS\n");
        printf("[2] - REFRESCOS\n");
        printf("[3] - NACHOS\n");
        printf("[4] - HOT DOGS\n");
        printf("[0] - Salir\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Cuantas palomitas deseas pedir? ");
                scanf("%d", &cantidad);
                totalIndividual += cantidad;
                break;
            case 2:
                printf("Cuantos refrescos deseas pedir? ");
                scanf("%d", &cantidad);
                totalIndividual += cantidad;
                break;
            case 3:
                printf("Cuantos nachos deseas pedir? ");
                scanf("%d", &cantidad);
                totalIndividual += cantidad;
                break;
            case 4:
                printf("Cuantos hot dogs deseas pedir? ");
                scanf("%d", &cantidad);
                totalIndividual += cantidad;
                break;
            case 0:
                printf("Saliendo...\n");
                
                menu();
                
            default:
                printf("Opción no válida. Por favor, ingresa una opción válida.\n");
                break;
        }
    } while (opcion != 0);
}
void salir()
{
	
	guardarCompras();
	printf("Presiona cualquier tecla para continuar.");
	scanf("%d", &z);
	
	system("cls");
	printf("###########################################\n");
	printf("###########################################\n");
	printf("## \t \t \t \t \t ## \n");
	printf("## \t \t CINEFIME \t  \t ## \n");
	printf("## \t \t \t \t \t ## \n");
	printf("###########################################\n");
	printf("###########################################\n");
	
	
	
	printf("Gracias por su seleccion en CINEFIME, regrese pronto.");
}

void fnaf()
{
	
	system("cls");
	
	printf("Cuantas entradas para niños quieres comprar?\n");
	scanf("%d", &a);
	printf("Cuantas entradas para adultos quieres comprar?\n");
	scanf("%d", &b);
	printf("Cuantas entradas para personas de la tercera edad quieres comprar?\n");
	scanf("%d", &c);
	
	nino = nino * a;
	adulto = adulto * b;
	tercera_edad = tercera_edad * c;
	
	system("cls");
	
	printf("El monto total de los boletos son: \n");
	printf("Niño : $%d pesos mexicanos.\n", nino);
	printf("Adulto : $%d pesos mexicanos.\n", adulto);
	printf("Tercera edad: $%d pesos mexicanos.\n", tercera_edad);
	
	printf("==============================================================================\n");
	printf("==============================================================================\n");
	
	
	totalNinoBoletos += nino;
    totalAdultoBoletos += adulto;
    totalTerceraEdadBoletos += tercera_edad;

	
	do {
    
	printf("Quieres comprar mas boletos para otra funcion? \n ");
	printf("Escribe [1] si quieres regresar a comprar boletos de funcion \n [2] si quieres regresar al menu \n");
	scanf("%d", &i);

    switch (i) {
        case 1:
            menu_boletos();
            break;
        case 2:
            menu();
            break;
        default:
            system("cls");
            printf("VALOR ERRÓNEO, ingresa de nuevo la opción \n");
            break;
    }
	} while (i != 1 && i != 2);
	
	
}

void jdh()
{
system("cls");
	
	printf("Cuantas entradas para niños quieres comprar?\n");
	scanf("%d", &a);
	printf("Cuantas entradas para adultos quieres comprar?\n");
	scanf("%d", &b);
	printf("Cuantas entradas para personas de la tercera edad quieres comprar?\n");
	scanf("%d", &c);
	
	nino = nino * a;
	adulto = adulto * b;
	tercera_edad = tercera_edad * c;
	
	system("cls");
	
	printf("El monto total de los boletos son: \n");
	printf("Niño : $%d pesos mexicanos.\n", nino);
	printf("Adulto : $%d pesos mexicanos.\n", adulto);
	printf("Tercera edad: $%d pesos mexicanos.\n", tercera_edad);
	
	printf("==============================================================================\n");
	printf("==============================================================================\n");
	
	
	totalNinoBoletos += nino;
    totalAdultoBoletos += adulto;
    totalTerceraEdadBoletos += tercera_edad;
	
		do {
    
	printf("Quieres comprar mas boletos para otra funcion? \n ");
	printf("Escribe [1] si quieres regresar a comprar boletos de funcion \n [2] si quieres regresar al menu \n");
	scanf("%d", &i);

    switch (i) {
        case 1:
            menu_boletos();
            break;
        case 2:
            menu();
            break;
        default:
            system("cls");
            printf("VALOR ERRÓNEO, ingresa de nuevo la opción \n");
            break;
    }
	} while (i != 1 && i != 2);
}

void ted()
{
system("cls");
	
	printf("Cuantas entradas para niños quieres comprar?\n");
	scanf("%d", &a);
	printf("Cuantas entradas para adultos quieres comprar?\n");
	scanf("%d", &b);
	printf("Cuantas entradas para personas de la tercera edad quieres comprar?\n");
	scanf("%d", &c);
	
	nino = nino * a;
	adulto = adulto * b;
	tercera_edad = tercera_edad * c;
	
	system("cls");
	
	printf("El monto total de los boletos son: \n");
	printf("Niño : $%d pesos mexicanos.\n", nino);
	printf("Adulto : $%d pesos mexicanos.\n", adulto);
	printf("Tercera edad: $%d pesos mexicanos.\n", tercera_edad);
	
	printf("==============================================================================\n");
	printf("==============================================================================\n");
	
	totalNinoBoletos += nino;
    totalAdultoBoletos += adulto;
    totalTerceraEdadBoletos += tercera_edad;
	
	do {
    
	printf("Quieres comprar mas boletos para otra funcion? \n ");
	printf("Escribe [1] si quieres regresar a comprar boletos de funcion \n [2] si quieres regresar al menu \n");
	scanf("%d", &i);

    switch (i) {
        case 1:
            menu_boletos();
            break;
        case 2:
            menu();
            break;
        default:
            system("cls");
            printf("VALOR ERRÓNEO, ingresa de nuevo la opción \n");
            break;
    }
	} while (i != 1 && i != 2);
}

void chucky()
{
system("cls");
	
	printf("Cuantas entradas para niños quieres comprar?\n");
	scanf("%d", &a);
	printf("Cuantas entradas para adultos quieres comprar?\n");
	scanf("%d", &b);
	printf("Cuantas entradas para personas de la tercera edad quieres comprar?\n");
	scanf("%d", &c);
	
	nino = nino * a;
	adulto = adulto * b;
	tercera_edad = tercera_edad * c;
	
	system("cls");
	
	printf("El monto total de los boletos son: \n");
	printf("Niño : $%d pesos mexicanos.\n", nino);
	printf("Adulto : $%d pesos mexicanos.\n", adulto);
	printf("Tercera edad: $%d pesos mexicanos.\n", tercera_edad);
	
	printf("==============================================================================\n");
	printf("==============================================================================\n");
	
	totalNinoBoletos += nino;
    totalAdultoBoletos += adulto;
    totalTerceraEdadBoletos += tercera_edad;
	
	do {
    
	printf("Quieres comprar mas boletos para otra funcion? \n ");
	printf("Escribe [1] si quieres regresar a comprar boletos de funcion \n [2] si quieres regresar al menu \n");
	scanf("%d", &i);

    switch (i) {
        case 1:
            menu_boletos();
            break;
        case 2:
            menu();
            break;
        default:
            system("cls");
            printf("VALOR ERRÓNEO, ingresa de nuevo la opción \n");
            break;
    }
	} while (i != 1 && i != 2);
}



void guardarCompras()
 {
    FILE *archivo;

    archivo = fopen("registro_compras.txt", "a");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para guardar las compras.\n");
        return;
    }

    fprintf(archivo, "Registro de Compras:\n");
    
     fprintf(archivo, "Registro de Compras:\n");
    fprintf(archivo, "Nombre del cliente: %s.\n", nombre);

    fprintf(archivo, "Boletos:\n");
    fprintf(archivo, "Niño: %d boletos.\n", totalNinoBoletos);
    fprintf(archivo, "Adulto: %d boletos.\n", totalAdultoBoletos);
    fprintf(archivo, "Tercera edad: %d boletos.\n", totalTerceraEdadBoletos);
    fprintf(archivo, "Total boletos: %d boletos.\n", totalNinoBoletos + totalAdultoBoletos + totalTerceraEdadBoletos);

    fprintf(archivo, "Dulcería:\n");
    fprintf(archivo, "Combos: %d combos.\n", totalCombos);
    fprintf(archivo, "Individual: %d productos individuales.\n", totalIndividual);
    fprintf(archivo, "Total dulcería: %d productos.\n", totalCombos + totalIndividual);

    fprintf(archivo, "===============================\n");
    fprintf(archivo, "Total general: %d productos.\n", totalNinoBoletos + totalAdultoBoletos + totalTerceraEdadBoletos + totalCombos + totalIndividual);
    
    system("cls");

    printf("================================================\n");
    printf("\nRegistro de Compras:\n");
    printf("\f");
    printf("Boletos:\n");
    printf("Nino: $%d pesos.\n", totalNinoBoletos);
    printf("Adulto: $%d pesos.\n", totalAdultoBoletos);
    printf("Tercera edad: $%d pesos.\n", totalTerceraEdadBoletos);
    printf("Total boletos: $%d pesos.\n", totalNinoBoletos + totalAdultoBoletos + totalTerceraEdadBoletos);

    printf("================================================\n");
    printf("Dulceria:\n");
    printf("\f");
    printf("Combos: %d combos.\n", totalCombos);
    printf("Individual: %d productos individuales.\n", totalIndividual);
    printf("Total dulceria: %d productos.\n", totalCombos + totalIndividual);

    printf("=======================\n");
    printf("Total general: %d productos.\n", totalNinoBoletos + totalAdultoBoletos + totalTerceraEdadBoletos + totalCombos + totalIndividual);


    fclose(archivo);
}






