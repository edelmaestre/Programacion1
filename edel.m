clear; clc; clf;

Xa=-5:0.1:5;
Ya=-5:0.1:5;
[X, Y]=meshgrid(Xa,Ya);

plot3(X, Y, Z)

title('f(x,y)=x^2+y^2')
xlabel('Eje x');
ylabel('Eje y');
zlabel('Eje z');
grid on