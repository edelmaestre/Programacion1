#include <iostream.h> 
#include <conio.h>
#include <stdio.h>

main () {
int valorMaximo, contador; 

cout << "�Hasta qu� n�mero deseas que busque n�meros primos?"; 
cin >> valorMaximo; 

for (contador = 1; contador <= valorMaximo; contador ++) 
if (contador % 2 != 0 || contador == 2) 
cout << contador << "\n";

getch ();
return 0;
}