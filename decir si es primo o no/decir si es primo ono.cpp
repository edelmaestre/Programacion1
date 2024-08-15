#include <iostream.h>
#include <stdio.h>
#include <conio.h>



main()
{
int num,cont=0; 
clrscr(); 
cout<<"Ingrese el numero ";cin>>num; 
for(int i=1;i<=num;i++) 
{ 
if(num%i==0) 
cont=cont+1; 
} 

if(cont==2) 
{ 
cout<<"el numero es primo"; 
} 
else 
{ 
cout<<"El numero no es primo";
} 

getch(); 
}




