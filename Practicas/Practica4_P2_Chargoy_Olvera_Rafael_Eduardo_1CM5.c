#include<stdio.h>
#include<math.h>

void scan(float*,float*);
void f(float*,float*);
void fab(float*,float*,float*,float*,float*);
void print(float*,float*,float*);

#define PI 3.1416

void main(){
  float a, b, fa, fb, integral;
  scan(&a,&b);
  fab(&a,&fa,&b,&fb,&integral);
  print(&a,&b,&integral);
}

void scan(float * a, float * b){
  printf("\nIngrese el valor para a:\t");
  scanf("%f",a);
  printf("\nIngrese el valor para b:\t");
  scanf("%f",b);
}

void f(float * x,float * dir){
  *dir = logf(*x+1) - sinf(*x * 2 * PI);
}

void fab(float * a,float * dirA, float * b,float * dirB, float * integral){
  f(a,dirA); f(b,dirB);
  *integral = *dirB - *dirA;
}

void print(float * a, float * b, float * integral){
  printf("\nPara los valores de a = %f y b = %f, el area bajo la curva  en esos limites es de %f\n\n",*a,*b,
  *integral);
}
