/*Ingresar dos números enteros positivos N1 y N2, en donde N1 tiene que ser menor que N2. Luego
sumar los números primos mayores que N1 y menores que N2, Posteriormente mostrar por pantalla el
resultado de la suma. Por ej: se ingresan N1=1 y N2=5. Los números primos entre N1 Y N2 son 2 y 3.
Entonces 2 + 3 = 5 Entonces debe mostrar por pantalla "El resultado de la suma es: 5 ” Para resolver
este problema deberá implementar las definiciones y declaraciones de las funciones que se solicitan
a continuación. RESPETANDO LOS NOMBRES PARÁMETROS Y DE LA FUNCIÓN Y QUE PARÁMETROS RETORNA.
a- ingresarEntero:
Datos de entrada: ninguno
Proceso: permite ingresar un número entero y controlar si el mismo es positivo.
Salida: retorna el número ingresado.
b- controlarNumeros:
Datos de entrada: dos valores enteros, N1 y N2
Proceso: controlar que un valor (N1) es menor que otro (N2).
Salida: retorna una variable entera que representa si es menor o no.
c- sumarPrimos:
Datos de entrada: dos valores enteros (N1 y N2)
Proceso: sumar los números primos, comprendidos entre dos valores dados (N1 y N2) y mostrar por pantalla el valor.
Salida:no retorna nada
d- Una función para determinar si un número es primo.
Datos de entrada: un número entero
Proceso: determinar si el número es primo
Salida: retorna un entero 1= si el numero es primo, 0= si el número no es primo.
Aclaración: La suma debe efectuarse en la función “sumarPrimos” que llamará a una segunda función (ud. puede elegir el nombre) que determinará si un número es primo.*/

#include <stdio.h>

int ingresarentero();
int controlarnumero(int N1, int N2);
void sumarprimos(int num1, int num2);
int controlprimos(int numero);

int main(int argc, char *argv[])
{
    int mayor, menor, aux, control;
    printf("\nIngresar un número positivo:\n");
    mayor = ingresarentero();
    printf("\nIngresar otro número positivo:\n");
    menor = ingresarentero();
    control=controlarnumero(mayor, menor);
    if(control==1)
    {
        aux=mayor;
        mayor=menor;
        menor=aux;
    }
    sumarprimos(mayor, menor);
    return 0;
}

int ingresarentero()
{
    int positivo;
    do
    {
        scanf("%i", &positivo);
        if (positivo <= 0)
        {
            printf("\nEl numero ingresado  es menor o igual a cero, ingrese un numero valido:\n");
            scanf("%i", &positivo);
        }
    } while (positivo <= 0);
    return positivo;
}
int controlarnumero(int num1, int num2)
{
    if (num1 < num2)
    {
        return 1;
    }
    else if (num1 > num2)
    {
        return 0;
    }
}
void sumarprimos(int num1, int num2)
{
    int auxiliar, suma = 0, i, contador = 0, primo;
    auxiliar = num1 - num2 - 1;
    printf("\nEl resultado de la suma de los numeros primos comprendidos entre %i y %i es",num2, num1);
    while (auxiliar>0)
    {
        num1--;
        primo=controlprimos(num1);
        if(primo==1)
        {
            suma+=num1;
        }
        auxiliar--;
    }
    printf(" %i\v",suma);
}
int controlprimos(int numero)
{
    int contador=0, i;
    for (i = numero; i > 0; i--)
    {
        if (numero % i == 0)
        {
            contador++;
        }
    }
    if(contador==2)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}