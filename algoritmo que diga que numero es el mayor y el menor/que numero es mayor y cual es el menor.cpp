#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main{
int n1,n2,n3;

  cout<<"digitar numero entero" ;cin>>n1;
  cout<<"digitar numero entero" ;cin>>n2;
  cout<<"Digitar un numero entero"; cin>>n3;

  if ((n1>n2) && (n1>n3)){
     cout"el numero mayor es: ";<<n1;
     if (n2>n3) {

         cout<<"el numero menor es "<<n3;
         }else{
         cout<<"el numero menor es "<<n2;
         }
      }



   if ((n2>n1) && (n2>n3)){
   cout<<"el numero mayor es: "<<n2;
   if(n1>n3) {

         cout<<"el numero menor es "<<n3;
         }else{
         cout<<"el numero menor es " <<n1;

         }
      }



      if ((n3>n1) && (n3>n2)){
   cout<<"el numero mayor es: "<<n3;
   if(n1>n2) {

         cout<<"el numero menor es "<<n2;
         }else{
         cout<<"el numero menor es " <<n1;

         }
      }


     if((n1==n2) && (n1==n3)){
     cout<<"Los numeros son iguales : "<<n1 <<"" <<n2<<""<<n3;
     }


getch();
}