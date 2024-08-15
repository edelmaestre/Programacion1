
  #include <iostream.h>
 #include <conio.h>
 #include <stdio.h>
 void sumar (int a, int b) {
int sum;
sum=a+b;

cout<<"la suma es: "<<sum<<"\n";
getch();

}
main (){
int x,y;
cout<<"digitar numero:"<<"\n";
cin>>x;
cout<<"digitar un numero"<<"\n";
cin>>y;
sumar(x,y);
return 0;
}
