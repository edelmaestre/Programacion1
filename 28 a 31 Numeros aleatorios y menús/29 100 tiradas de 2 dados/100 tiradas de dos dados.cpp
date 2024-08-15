#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
int c=0, i=0;
while(i<101){
if(int(rand()*6)+int(rand()*6)+2==10){
c=c+1;
}
 i=i+1;
}

gotoxy(10,20); cout<<"Las veces que suman 10 son: ";
gotoxy(10,48); cout<<c;

getch();
return 0;
}