/*Programa: Conversion de Grados*/
#include <iostream>

using namespace std;

int main()
{
    float celsius, fahrenheit;
    cout << "Grados Celsius: ";
    cin >> celsius;
    fahrenheit=(celsius*9)+32;
    cout << celsius << "°C son: " << fahrenheit << "°F" <<endl;
    return 0;
}
