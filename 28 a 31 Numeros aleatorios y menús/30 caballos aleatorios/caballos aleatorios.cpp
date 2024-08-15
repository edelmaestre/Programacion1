#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){

char dibujo[6]="*****";
int col1=4, col2=4;

gotoxy(10,col1); cout<<dibujo;
gotoxy(10,col2); cout<<dibujo;

while(col1<=75&&col2<=75){
if(rand()<=0.5){
gotoxy(10,col1); cout<<"    ";
col1=col1+4;
gotoxy(10,col1); cout<<dibujo;
} else{
gotoxy(12,col2); cout<<"    ";
col2=col2+4;
gotoxy(12,col2); cout<<dibujo;
}

}

gotoxy(16,20); cout<<"El ganador es el caballo numero: ";
if(col1>=75){
gotoxy(16,54); cout<<"1";
}else{
gotoxy(16,54); cout<<"2";
}

getch();
return 0;
}
