#include <iostream.h>
#include <conio.h>
#include <stdio.h>
  main(){


      int opc,a,b,salir=0;
      float resp;



      cout<<"\n-------MENU--------";
      cout<<"\n 1. Suma";
      cout<<"\n 2. Resta";
      cout<<"\n 3. Multiplicacion";
      cout<<"\n 4. Division";
      cout<<"\n 5. Salir";

      cout<<"\n Elija una opcion ===> ";
      cin>>opc;

      clrscr();

      switch(opc){


     case 1: cout<<"\n ingrese 1er numero: "; cin>>a;
             cout<<"\n ingrese 2do numero: "; cin>>b;   
             resp=a+b; break;


     case 2: cout<<"\n ingrese 1er numero: "; cin>>a;
             cout<<"\n ingrese 2do numero: "; cin>>b;   
             resp=a-b; break;

     case 3: cout<<"\n ingrese 1er numero: "; cin>>a;
             cout<<"\n ingrese 2do numero: "; cin>>b;   
             resp=a*b; break;
     
     case 4: cout<<"\n ingrese 1er numero: "; cin>>a;
             cout<<"\n ingrese 2do numero: "; cin>>b;   
             resp=a/b; break;

     while (salir==0)


     default: cout<<"opcion invalida";


     }

     clrscr();
     
     cout<<"\n la resuesta es: "<<resp<<endl;


     getch();



}