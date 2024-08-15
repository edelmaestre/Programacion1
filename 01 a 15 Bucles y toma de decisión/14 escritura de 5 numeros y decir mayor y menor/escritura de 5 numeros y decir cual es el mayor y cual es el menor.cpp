#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){

int con, n;
int maximo=0, minimo=30000;
while(con<=5){

cout<<"numero"<<endl;
cin>>n;

if(n>maximo){
maximo=n  ;
}

if(n<minimo){
minimo=n   ;
}
con=con+1   ;
}


cout<<"el mayor de los numeros es: ";
cout<<maximo<<endl;
cout<<"el menor de los numeros es: " ;
cout<<minimo;

getch();
return 0;
}
