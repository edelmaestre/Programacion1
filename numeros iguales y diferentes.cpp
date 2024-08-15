#include <stdio.h>
#include <iostream.h>
#include <conio.h>

 int main ()
 {
 int n1, n2, n3;
 cout<< " escribir un numero n1 ";
 cin>> n1;
 cout<< " escribir un numero n2 ";
 cin>> n2;
 cout<<  "escribir un numero n3 ";
 cin>>n3;

 	if (n1==n2 && n1==n3){
   		cout<< " todos los numeros son iguales : "<<n1<<n2<<n3<<"\n";
        }else
    if (n2!=n1 && n2!=n3){

   		cout<< " todos los numeros son diferentes :" <<n1<<n2<<n3<<"\n";

   		}else
     if (n2!=n1 && n2==n3){

   		cout<< " n2 y n3 son iguales :" <<n2<<n3<<"\n";
         cout<< " n2 y n3 son diferentes de n1  :" <<n1<<"\n";
   		}else


    if (n1==n2 && n2!=n3){
         	cout<< " n1 y n2 son iguales :" <<n1<<n2<<"\n";
         cout<< " n1 y  n2 son diferentes de n3 :" <<n3<<"\n";
         }else

    if (n1==n3 && n2!=n3) {
          cout<< " n1 y n3 son iguales :" <<n1<<n3<<"\n";
         cout<< " n1 y  n3 son diferentes de n2 :" <<n2<<"\n";
         }else

   getch();

   return 0;
}
