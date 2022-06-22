/*Implementar un programa que utilice una función para realizar una presentación de la materia, por ejemplo: 
"Programacion I" "Ano de cursada: 2022" "Facultad de Ciencias Exactas y Tecnología" 
Usar secuencias de escapa para salto de línea (\n) y tabulaciones (\t)*/

#include<stdio.h>

void presentacion();

int main(int argc,char*argv[])
{
    presentacion();
    return 0;
}

void presentacion()
{
printf("\n\t\t   Programacion 1\n\t\tAño de cursada: 2022\n\tFacultad de Ciencias Exactas y Tecnologia\v");
}