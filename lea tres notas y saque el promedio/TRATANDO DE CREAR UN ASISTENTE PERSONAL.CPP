#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){

float n1,n2,n3, prom ;

cout<<"...Realizar un programa que lea tres notas y que muestre su promedio..."<<endl;
cout<<  "Didite su primera nota :"<<endl;
cin>>n1;
cout<<"ingrese su segunda nota: "<<endl;
cin>>n2;
cout<<"ingrese su tercera nota: "<<endl;
cin>>n3;
prom=(n1+n2+n3)/3;
cout<<"el promedio de su nota es: ";
cout<<prom;



getch();
return 0;
}
