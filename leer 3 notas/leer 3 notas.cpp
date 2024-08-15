#include <conio.h>
#include <stdio.h>
#include <iostream.h>

main ()
{

char nom;
float n1,n2,n3;
float prom;                           /* leer 3 notas de un estudiante y sacar el promedio */

  cout<<"Digite su nombre por favor: ";
  cin>>nom;
  cout<<"Digitar la primera nota: " ;
  cin>>n1;
   cout<<"Digitar la segunda nota: " ;
  cin>>n2;
  cout<<"Digitar la tercera nota: " ;
  cin>>n3;

  prom=(n1*0.3)+(n2*0.3)+(n3*0.4);
  if (prom>=3) {
  cout<<"usted gano, su nota es: "<<prom ;
  }
  else{
  cout<<"usted perdio," ;
  getch();
  return 0;
    }
}