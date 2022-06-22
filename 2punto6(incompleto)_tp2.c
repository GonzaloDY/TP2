/*Leer un número entero positivo de dos o más dígitos, y luego presentar por pantalla 
al número ingresado y su invertido. Para resolver deberá implementar 
a- función para controlar si un número es un entero positivo de dos o más dígitos 
b- función para generar el invertido del número dado*/

#include<stdio.h>

int controlpos(int num);
int invertido(int num);

int main(int argc, char*argv[])
{
    int numero;
    controlpos(numero);
    invertido(numero);
    return 0;
}

int controlpos(int num)
{
    do
    {
        scanf("%i",&num);
        if(num<=0)
        {
            printf("\nEl numero ingresado no es positivo, ingrese otro numero:\n");
            scanf("%i",&num);
        }
    }while(num<=0);
    return num;
}
int invertido(int num)
{

}