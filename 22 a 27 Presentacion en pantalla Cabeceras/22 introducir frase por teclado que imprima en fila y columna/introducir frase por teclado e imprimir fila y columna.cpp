#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){

int fi, co, veces;
  char frase[30];

  gotoxy(5,15); cout<<"Frase";
  gotoxy(5,22); cin>>frase;

  fi=8;
  co=15;
  veces=0 ;

  while(veces<=5){

  gotoxy(fi,co); cout<<frase;
  veces=veces+1;
  co=co+4;
  fi=fi+1;

  }


getch();
return 0;
}
