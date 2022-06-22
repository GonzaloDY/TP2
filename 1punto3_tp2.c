/*Ingresar, en una variable tipo estructura, los datos referentes a una fecha (día, mes, año). Luego 
usar una función para presentar por pantalla el contenido de dicha variable con el siguiente formato 
"la fecha ingresada es 5-4-1996"(dónde 5 corresponde a los días, 4 a los meses y 1996 a los años). 
Usar la siguiente estructura para la fecha typedef struct { int dia; int mes; int anio; }fecha;*/

#include<stdio.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
}fecha;

void mostrarFecha(fecha lafecha);

int main(int argc, char *argv[])
{
    fecha unaFecha;
    printf("\nIngresar una fecha\nDia:\t");
    scanf("%i",&unaFecha.dia);
    printf("Mes:\t");
    scanf("%i",&unaFecha.mes);
    printf("Año:\t");
    scanf("%i",&unaFecha.anio);
    mostrarFecha(unaFecha);
    return 0;
}

void mostrarFecha(fecha lafecha)
{
    printf("\nLa fecha ingresada es: %i-%i-%i\v",lafecha.dia,lafecha.mes,lafecha.anio);
}