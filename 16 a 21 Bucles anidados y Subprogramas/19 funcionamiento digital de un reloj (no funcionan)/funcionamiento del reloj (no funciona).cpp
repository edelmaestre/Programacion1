#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){

int horas, minutos, segundos;
char res[10]="1";

cout<<"Horas: ";
cin>>horas;
cout<<"Minutos: ";
cin>>minutos;
cout<<"Segundos: ";
cin>>segundos;

while(res=="1"){
 while(horas<24){
   while(minutos<60){
      while(segundos<60){
      cout<<horas;
      cout<<minutos;
      cout<<segundos;
      segundos<segundos+1;
      }
     minutos=minutos+1;
     segundos=0;
   }
     horas=horas+1;
     minutos=0;
 }
horas=0;

}

getch();
return 0;
}