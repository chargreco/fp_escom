#include<stdio.h>
#include<math.h>

void scan(int*,float*);
int scanm();
float scanx();
float sinn(int,float);
int fact(int);
void print(float);

void main(){
  int m;float x,seno;
  scan(&m,&x);
  seno=sinn(m,x);
  print(seno);
}

void print(float sinn){
  printf("= %.4f\n\n",sinn);
}

float sinn(int m, float x){
  float seno=0;
  printf("\nsin %.2f = ",x);
  for(int n = 0; n < m; n++){
    if(n!=0){
	seno+=(powf(-1,n)*powf(x,2*n + 1))/(fact(2*n + 1));
	if(n%2 == 0) printf("+ "); else printf("- ");
	printf("%.2f^%d/%d! ",x,2*n+1,2*n+1);
    }else{
	printf("%.2f ",x);
	seno=x;
    }
  }
  return seno;
}

int fact(int n){
  int j = 1;
  for(int i = 1; i <= n; i++){
    j*=i;
  }
  return j;
}

void scan(int * m, float * x){
  *m=scanm();
  *x=scanx();
}

int scanm(){
  printf("\nIngresa el numero de veces que se hará la operación:\t");
  int x;
  scanf("%d",&x);
  return x;
}

float scanx(){
  printf("\nIngresa el angulo del que quieres obtener su seno:\t");
  float x;
  scanf("%f",&x);
  return x;
}
