#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){

  int c=0, fi, col;
  gotoxy(5,20); cout<<"los numeros del 0 al 100 son: ";
  fi=7;
  col=5;
  while(c<101){
  gotoxy(fi,col); cout<<c;
  c=c+1;
  col=col+4;

 /* if(col>75){
  fi=fi+2;
  col=5;

  }         */


  }

  getch();
return 0;
}
