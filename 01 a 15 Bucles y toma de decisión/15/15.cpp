#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){

int num1, num2, aux,son, pares, sumaimpar=0;
cout<<"digite un numero";
cin>>num1;
cout<<"digite un numero";
cin>>num2;


 for(num1; num1<=num2; num1++){
//cout<< num1;
son=son+1;
cout<<son;
if(num1%2==0){
pares=pares+1;
}else{
sumaimpar=num1+sumaimpar;

}


 }


cout<<"numeros visualizados";
cout<<son;
cout<<"Pares hay: ";
cout<<pares;
cout<<"La suma de los impares es: ";
cout<<sumaimpar;
getch();
return 0;
}
