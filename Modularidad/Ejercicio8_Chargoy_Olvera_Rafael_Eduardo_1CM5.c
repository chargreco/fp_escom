#include<stdio.h>
#include<math.h>

// Prototipos de Funciones
void getD(float *, float *,float *, float *,float *);
void scan(float *, float *,float *, float *);
void print(float *, float *,float *, float *,float *);

// funciónn Principal
void main( ){
    float x1,x2,y1,y2,d;
    scan(&x1,&y1,&x2,&y2);
    getD(&x1,&y1,&x2,&y2,&d);
    print(&x1,&y1,&x2,&y2,&d);
}

void getD(float * x1,float * y1,float * x2,float * y2, float *d){
   *d = sqrtf(powf(*x2-*x1,2)+powf(*y2-*y1,2));
}

void scan(float * x1,float * y1,float * x2,float * y2){
   printf("\nIngrese las coordenadas del A\n\n");
   printf("x = ");
   scanf("%f",x1); // se puede omitir *& y dejarlos
   printf("y = ");
   scanf("%f",y1);
   
   
   printf("\nIngrese las coordenadas del B\n\n");
   printf("x = ");
   scanf("%f",x2); // se puede omitir *& y dejarlos
   printf("y = ");
   scanf("%f",y2);
}

void print(float * x1,float * y1,float * x2,float * y2, float *d){
   printf("\nConociendo los puntos A(%.2f,%.2f) y B(%.2f,%.2f), su distancia es: \n",*x1,*y1,*x2,*y2);
   printf("\n\td = %.2f\n\n",*d);
}

