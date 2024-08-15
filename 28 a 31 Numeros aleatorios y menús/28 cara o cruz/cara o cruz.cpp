#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//#include <ctime.h>

main(){

char res[30]="s";
//srand( time( 0 ) );

while(res=="s"){
clrscr();
if (rand()<=0.5){
gotoxy(10,35); cout<<"Cara" ;
} else{

gotoxy(10,35); cout<<"Cruz";
}

}


getch();
return 0;
}
