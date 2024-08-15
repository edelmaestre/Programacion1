#include <iostream.h> 
#include <conio.h>
#include <stdio.h>

main () {
int valorMaximo, contador; 

cout << "¿Hasta qué número deseas que busque números primos?"; 
cin >> valorMaximo; 

for (contador = 1; contador <= valorMaximo; contador ++) 
if (contador % 2 != 0 || contador == 2) 
cout << contador << "\n";

getch ();
return 0;
}