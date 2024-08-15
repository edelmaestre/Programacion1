#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){

 int a, i, sum=0;

 cout<<"Ingrese un numero: ";
 cin>>a;

for(i=1; i<=a; i++){

 if(i%3==0){
  sum=1+sum;
  cout<<i<<endl;
 }

  }
    cout<<"el conteo es: ";cout<< sum;
getch();
return 0;
}