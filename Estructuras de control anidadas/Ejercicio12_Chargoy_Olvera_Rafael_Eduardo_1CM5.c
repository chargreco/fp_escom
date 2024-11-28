#include<stdio.h>

float scan(char,int);
float procedure();
void prom(float *,float,int);
void print(float,char);

void main(){
  float promedio = procedure();
  print(promedio,'t');
}

float scan(char name,int i){
  switch (name){
    case 'g':
	printf("  Ingrese el número de grupos:\t");break;
    case 'n':
	printf("  Ingrese el número de alumnos del grupo %d:\t",i+1);break;
    case 'm':
	printf("  Ingrese el número de materias del alumno %d:\t",i+1);break;
    case 'c':
	printf("  Ingrese la calificación no. %d:\t",i+1);break;
  }
  float x;
  scanf("%f",&x);
  return x;
}

float procedure(){
  float promT = 0;
  float g = scan('g',0);
  //printf("\n\n--El valor de G es %f--\n\n",g);
  for(int i = 0; i < g; i++){
    float promG = 0;
    printf("Grupo %d>",i+1);
    float a = scan('n',i);
    for(int j = 0; j < a; j++){
      float promA = 0;
      printf("Grupo %d/Alumno %d>",i+1,j+1);
      float m = scan('m',j);
      for(int k = 0; k < m; k++){
	float promM = 0;
	printf("Grupo %d/Alumno% d/Materia %d> Ingrese las calificaciones de la materia %d\n\n",i+1,j+1,k+1,k+1);
	for(int l = 0; l < 3; l++){
	  printf("Grupo %d/Alumno% d/Materia %d/Calif %d>",i+1,j+1,k+1,l+1);
	  float c = scan('c',l);
	  prom(&promM,c,l);
	  printf("\n");
	}
	prom(&promA,promM,k);
      }
      print(promA,'a');
      prom(&promG,promA,j);
    }
    print(promG,'g');
    prom(&promT,promG,i);
  }
  return promT;
}

void prom(float * p,float np, int i){
   *p = ((*p * i) + np)/(i+1);
}

void print(float p, char i){
  if (i == 't')printf("\nEl promedio total es: %f\n\n",p);
  if (i == 'a')printf("\nEl promedio del alumno es: %f\n\n",p);
  if (i == 'g')printf("\nEl promedio grupal es: %f\n\n",p);
}
