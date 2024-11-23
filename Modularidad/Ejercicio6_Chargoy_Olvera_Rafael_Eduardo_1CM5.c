#include<stdio.h>
#include<math.h>

double scan();
double semp(double,double,double);
double area(double,double,double,double);
void print(double,double);

void main(){
   printf("Ingresa los tres lados de un triángulo\n\n");
   double L1 = scan(),L2 = scan(),L3 = scan();
   double p = semp(L1,L2,L3);
   double a = area(L1,L2,L3,p);
   print(p,a);
}

double scan(){
   double num;
   scanf("%lf",&num);
   return num;
}

double semp(double L1,double L2,double L3){
   double semp = (L1+L2+L3)/2;
   return semp;
}

double area(double L1,double L2,double L3,double p){
   double area = sqrtf(p * (p - L1) * (p - L2) * (p -L3));
   return area;
}

void print(double p, double a){
   printf("\nEl semiperímetro es: \n\t%lf\n\nEl área es:\n\t%lf\n\n",p,a);
}
