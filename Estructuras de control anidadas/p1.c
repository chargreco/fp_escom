#include<stdio.h>
#include<math.h>

//Definir verdadero y falso

#define true 1
#define false 0

//Prototipos

float nextFloat();	//Para escanear flotantes (El numero a usar)
int showMenu();		//Muestra el menu y devuelve la opcion elegida
int nextInt();		//Para escanear enteros (la opcion del menu)
float proc(float);	//Hace la operacion solicitada segun un indice
void print(float,float);//Imprime

//main

void main(){
  float x = nextFloat();
  int op = showMenu();
  float proc = proc(op);
  print(x,proc);
}

//metodos

int showMenu(){
  int rep = true, rep2 = true;
  int op = 0, op2 = 0;
  int i = 0;
  while(rep){
    printf("\t\t\tM E N U\n\n\t1.\tFunciones trigonométricas.\n\t2.\tFunciones matemáticas.\n\t3.\tSalida.\n\n");
    op = nextInt();
    if(op == 3) rep = false;
    else if(1 > op || op > 2) printf("Esa opción no esta disponible.\n\n");
    else while(rep2){
      switch(op)
	case 1:
	  i = 10;
	  printf("\t\t\tFunciones trigonometricas\n\n\t1.\tSeno de B\n\t2.\tCoseno de B\n\t3.\tTangente de B\n\t4.\tRegreso al menú amterior\n\n");
	  op2 = nextInt();
	  if(op2 == 4) rep2 = false;
	  else if(1 > op2 || op2 > 3){
	    printf("Esa opción no esta disponible\n\n");
	    
	  }
	  break;
	case 2;
	  i = 20;
	  printf("");
	  break;
	default:
	  printf("ERROR: EL switch en la segunda repeticion tiene un error\n\n");
	  break;
    }
  }
}

float nextFloat(){
  float x;
  printf("Ingrese el número a usar:\t");
  scanf("%f",&x);
  return x;
}

float nextInt(){
  int x;
  printf("> ");
  scanf("%d",&x);
  return x;
}
