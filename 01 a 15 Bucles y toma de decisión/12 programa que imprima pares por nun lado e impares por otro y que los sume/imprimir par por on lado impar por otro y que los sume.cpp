#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){
int sumapar, sumaimpar;

for(int i=1; i<=100; i++){

if(i%2==0){
cout<<i<<endl;
sumapar=sumapar+i;
}

 }
cout<<"La suma de los pares es: ";
cout<<sumapar<<endl;
/*

for(int j=1; j<=100; j++){
if(j%2!=0){
cout<<j<<endl;
sumaimpar=sumaimpar+j;
}
}
cout<<"La suma de los impares es: ";
cout<<sumaimpar;
  */
getch();
return 0;
}
