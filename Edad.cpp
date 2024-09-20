/*Programa: Edad*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int dia,mes,ano,edad, fecha;
    printf("Ingrese su Dia de Nacimiento: ");
    scanf("%d",&dia);
    printf("Ingrese su Mes de Nacimiento: ");
    scanf("%d",&mes);
    printf("Ingrese su Año de Nacimiento: ");
    scanf("%d",&ano);
    printf("Ingrese el año actual: ");
    scanf("%d",&fecha);
    edad= fecha-ano;
    printf("Tu edad es de: %d",edad,"años");
    getch();
    return 0;
}
