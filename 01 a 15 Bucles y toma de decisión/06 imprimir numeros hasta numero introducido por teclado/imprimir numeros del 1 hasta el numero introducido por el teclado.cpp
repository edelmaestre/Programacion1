#include <iostream.h>
#include <stdio.h>
#include <conio.h>

//Hacer un programa en C que imprima todos los numeros naturales que hay desde la unidad hasta un numero que introducimos por teclado

main(){
int a,b;

cout<<"intruduce un valor: ";
cin>>b;

for(a=0;a<=b;a++)  {

cout<<a<<endl;

}


getch();
return 0;
}