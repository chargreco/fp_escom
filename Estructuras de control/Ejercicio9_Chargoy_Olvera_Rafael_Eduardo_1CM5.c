#include<stdio.h>

char scan();
void isVocal(char);
void printV();
void printNV();

void main(){
  char c = scan();
  isVocal(c);
}

char scan(){
  printf("\nIngrese una letra: ");
  char c;
  scanf("%c",&c);
  return c;
}

void isVocal(char c){
  if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c== 'I' || c == 'O' || c == 'U'){
    printV();
  }
  else{
    printNV();
  }
}

void printV(){
  printf("\nES UNA VOCAL\n\n");
}

void printNV(){
  printf("\nNO ES UNA VOCAL\n\n");
}
