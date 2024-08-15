#include <stdio.h>
#include <iostream.h>
#include <conio.h>
     int sum, res;
main(){
   clrscr();
   int a, b;
   cout<<"Digitar un nuemro: ";cin>>a;
   cout<<"Digitar un nuemro: ";cin>>b;
      char opc;
cout<<"\rMENU DE OPERACCIONES\n";
cout<<"~~~~~~~~~~~~~~~~~~~~\n";
cout<<" 1) Suma\n";
cout<<" 2) Resta \n";
cout<<" 3) Multiplicacion\n";
cout<<" 4) Division\n";
cout<<" 5) Salir\n";
cout<<"\nIngrese Seleccion del Menu: ";
cin>>opc;
switch(opc){
case '1':  sum=a+b;
            cout<<"la suma es: "<<sum;
          break;

case '2':   res=a-b;
            cout<<"la resta es: "<<res;
            break;
case '3':
           break;

case '4':  break;
case '5': break;
default : cout<<"VALOR NO PERMITIDO"; getch(); break;
}


   getch();
}
