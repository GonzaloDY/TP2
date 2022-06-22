/*Realizar un programa en lenguaje C que permita ingresar un valor N y muestre las N letras en mayúsculas en 
orden descendente. Por ejemplo si se ingresa N = 5, deberá mostrar: Z, Y, X, W, V Para resolver implementar: 
a- una función que realice el control de que N sea positivo 
b- una función que muestres las letras en mayúsculas en orden descendente.*/

#include<stdio.h>

int controlpos();
char mostrarletras(int contador, char letra);

int main(int argc, char*argv[])
{
    int cant;
    char letra='Z';
    printf("\nIngrese la cantidad de letras que se mostrarán:\t");
    cant=controlpos();
    while(cant>0)
    {
        mostrarletras(cant, letra);
        letra--;
        cant--;
    }
    printf("\v");
    return 0;
}

int controlpos()
{
    int N;
    do
    {
        scanf("%i",&N);
        if(N<=0)
        {
            printf("\nEl numero ingresado no es positivo, ingrese otro numero:\n");
            scanf("%i",&N);
        }
    }while(N<=0);
    return N;
}
char mostrarletras(int contador, char letra)
{
    printf("\n%c",letra);
}