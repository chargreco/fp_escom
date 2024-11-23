#include<stdio.h>
#include<math.h>

//Prototipos
float scan();
float getD(float,float,float,float);
float getM(float,float,float,float);
float getB(float,float,float);
void print(float,float,float,float,float,float,float);

//Main
void main(){
   float x1,y1,x2,y2,d,m,b;
   printf("\nIngrese las coordenadas de un punto A:\nx = ");
   x1 = scan();
   printf("y = ");
   y1 = scan();
   printf("\nIngrese las coordenadas de un punto B:\nx = ");
   x2 = scan();
   printf("y = ");
   y2 = scan();
   d = getD(x1,y1,x2,y2);
   m = getM(x1,y1,x2,y2);
   b = getB(x2,y2,m);
   print(x1,y1,x2,y2,d,m,b);
}

//Funciones
float scan(){
   float x;
   scanf("%f",&x);
   return x;
}

float getD(float x1,float y1,float x2,float y2){
   float d;
   d = sqrtf(powf(x1-x2,2.00)+powf(y1-y2,2.00));
   return d;
}

float getM(float x1,float y1,float x2,float y2){
   float m;
   m = (y2-y1)/(x2-x1);
   return m;
}

float getB(float x,float y,float m){
   float b;
   b = y - (m*x);
   return b;
}

void print(float x1,float y1,float x2,float y2,float d,float m,float b){
   printf("Para los puntos A(%.2f,%.2f) y B(%.2f,%.2f):\n\n\tDistancia = %.2f\n\tEcuación:\n\t\t y = (%.2f)x + (%.2f)\n\n",x1,y1,x2,y2,d,m,b);
}
