/*Programa: Edad*/
using namespace std;
#include<iostream>
int main()
{
    int dia,mes,ano,edad, fecha;
    cout <<"Ingrese su Dia de Nacimiento: ";
      cin >>dia;
   cout<<"Ingrese su mes de Nacimiento: ";
      cin>>mes;
   cout<<"Ingrese su ano de Nacimiento: ";
      cin>>ano;
   cout<<"Ingrese el ano actual: ";
      cin>>fecha;
    edad= fecha-ano;
   cout<<"su edad es: "<<edad<<" anos "<<endl;

    return 0;
}
