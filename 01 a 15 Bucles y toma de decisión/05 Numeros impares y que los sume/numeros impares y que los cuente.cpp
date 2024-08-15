#include <iostream.h>
#include <stdio.h>
#include <conio.h>

//Hacer un programa en C que imprima los números impares del 0 al 100 y que los sume

main(){
int a,b;

cout<<"0"<<endl;

for(a=1;a<=100;a++)  {



if(a%2!=0){

  b=a+b;

cout<<a<<endl;

}


}

cout<<"la suma de los impares es: ";
 cout<<b;

getch();
return 0;
}