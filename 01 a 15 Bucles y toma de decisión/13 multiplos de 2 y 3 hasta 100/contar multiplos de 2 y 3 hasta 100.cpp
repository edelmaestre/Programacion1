#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){


   int c=0;
   for(int i=1; i<=100; i++){

   if(i%2==0){
   if(i%3==0){
   cout<<i<<endl;
   c=c+1  ;
   }


   }

   }
    cout<<"La cantidad de numeros es: ";
     cout<<c;
getch();
return 0;
}
