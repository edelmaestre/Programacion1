#include <iostream.h>
#include <conio.h>
#include <stdio.h>

float num1, num2, suma, resta, multi, divi; /*Estas son variables Globales*/

void sumar(){
 cout<<"Digitar un numero: "; cin>>num1;
     cout<<"Digitar un numero: "; cin>>num2;
     suma=num1+num2;
     cout<<"La suma es :"<<suma<<endl;

}

main(){

    int op=0;
    cout<<"OPERACIONES MATEMATICAS "<<endl;
    cout<<"1. Suma"<<endl;
    cout<<"2. Resta"<<endl;
    cout<<"3. Multiplicar"<<endl;
    cout<<"5. Dividir"<<endl;
    cout<<"6. Salir"<<endl;

    cout<<"Digitar su opcion, en el ranngo de 1 a 5: "<<endl;
    cin>>op;

      switch(op){

      case 1:

           sumar();

           break;

      case 2:


     cout<<"Digitar un numero: "; cin>>num1;
     cout<<"Digitar un numero: "; cin>>num2;
     resta=num1-num2;
     cout<<"La resta es :"<<resta<<endl;
     break;

      case 3:

     cout<<"Digitar un numero: "; cin>>num1;
     cout<<"Digitar un numero: "; cin>>num2;
     multi=num1*num2;
     cout<<"La multiplicacion es :"<<multi<<endl;
     break;

      case 4:

     cout<<"Digitar un numero: "; cin>>num1;
     cout<<"Digitar un numero: "; cin>>num2;
     divi=num1/num2;
     cout<<"La division es :"<<divi<<endl;
     break;

      case 5:

     cout<<"Muchas Gracias";

       break;

          }

getch ();
return 0;
}
