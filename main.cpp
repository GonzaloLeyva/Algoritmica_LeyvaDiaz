/* Programa: PedirNombre */
/* #include<stdio.h> */
/* #include<conio.h> */
#include<cstdio>

int main()
{
    char nom[30], ape[30];

    printf("Intodusca su Nombre: ");
    scanf("%s",&nom);
    printf("\nIntodusca su Apellido: ");
    scanf("%s",&ape);
    printf("\nHola %s %s, buenos d%cas",nom,ape, 161);
   /*getch();*/ /*Pausar programa*/

    return 0;
}
