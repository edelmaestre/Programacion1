#include <stdio.h>
#include <iostream.h>
#include <conio.h>

 int main ()
 {
 int a, b, c;
 cout<< " escribir un numero a ";
 cin>> a;
 cout<< " escribir un numero b ";
 cin>> b;
 cout<<  "escribir un numero c ";
 cin>>c;

 	if (a>b && a>c){
   		cout<< " el numero mayor es a: "<<a<<"\n";
        }else
    if (b>a && b>c){

   		cout<< " el numero mayor es b: "<<b<<"\n";

   		}else{
         cout<< " el numero mayor es c: "<<c<<"\n";
          }
    if (a<b && b>c)
    			cout<< "el numero menor es a: "<<a<<"\n";
          else
    if (b<a && b<c)
    			cout<< " el numero menor es b: "<<b<<"\n";
          else
          	cout<< " el numero menor es c: "<<c<<"\n";  

   getch();

   return 0;
}
