#include <iostream.h>
#include <stdio.h>
#include <conio.h>

//Hacer un programa en C que imprima los n�meros pares del 0 al 100

main(){
int a,b;

cout<<"0"<<endl;

for(a=1;a<=100;a++)  {



if(a%2==0){



cout<<a<<endl;
}


}

getch();
return 0;
}