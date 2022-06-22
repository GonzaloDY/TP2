/*Codificar un programa que solicite al usuario un número complejo en la forma binómica y lo almacene en una estructura como el siguiente formato:
struct complejo {
float real;
float imaginario;
};
Luego mostrar por pantalla el mismo. Para resolver este problema debe utilizar: 
a) una función que permita solicitar al usuario un número complejo y 
b) otra función que muestre un número complejo dado por pantalla con el siguiente formato: "El número ingresado es a + b i" (esta función no es necesario que retorne valor)*/

#include<stdio.h>

typedef struct
{
    float real;
    float imaginario;
}complejo;

complejo ingresarComplejo();
void mostrarComplejo(complejo unNumero);

int main(int argc, char*argv[])
{
    complejo unNumero;
    unNumero=ingresarComplejo();
    mostrarComplejo(unNumero);
    return 0;
}
complejo ingresarComplejo()
{
    complejo numero;
    printf("\nPrograma para ingresar un numero complejo\nParte real:\t");
    scanf("%f",&numero.real);
    printf("Parte imaginaria:\t");
    scanf("%f",&numero.imaginario);
    return numero;
}
void mostrarComplejo(complejo unNumero)
{
    printf("\nEl número ingresado es %.1f + %.1f i\v",unNumero.real,unNumero.imaginario);
}