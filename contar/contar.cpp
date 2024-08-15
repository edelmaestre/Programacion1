#include <stdio.h>
#include <iostream.h>
#include <conio.h>
     int sum, res;
main(){
clrscr();
int n, cont, sum;
cont=1;
sum=0;
cout<<"digitar un valor entero para n: "; cin>>n;
while(cont<=n){
cout<< "  "<<cont;
sum=sum+cont;
cont++;

}
cout<<"\nLa suma de los valores contados es: "<<sum;
   getch();
}
