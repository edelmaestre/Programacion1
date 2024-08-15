#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){

int c, res=1;
char  frase[35];

while(res==1){
cout<<"Escribir una frase: "<<endl;
cin>>frase;
c=c+1;
cout<<"¿Deseas introducir mas frases? (0/1) ";
cin>>res;

}

cout<<"El numero de frases introducidas son: " <<endl;
cout<<c;


 getch();
 return 0;
}