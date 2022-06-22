/*Ingresar un número entero positivo, luego presentar por pantalla un mensaje que 
indique si el número ingresado es o no es primo. Para resolver implementar: 
a- una función que realice el control de que el número sea positivo. 
b- una función que determine si un número es primo.*/

#include<stdio.h>

int controlpos(int num);
int controlprimo(int num);

int main(int argc, char*argv[])
{
    int numero, primo;
    printf("\nIngrese un numero positivo:\n");
    numero=controlpos(numero);
    primo=controlprimo(numero);
    if(primo==1)
    {
        printf("\nEl numero ingresado es primo\v");
    }
    else
    {
        printf("\nEl numero ingresado no es primo\v");
    }
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
int controlprimo(int num)
{
    int controlprimos=0, i, contador=0;
    for(i=num;i>0;i--)
    {
        if(num%i==0)
        {
            contador++;
        }
    }
    if(contador==2)
    {
        controlprimos++;
    }
    return controlprimos;
}