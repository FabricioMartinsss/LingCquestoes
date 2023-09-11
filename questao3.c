#include <stdio.h>
#include <stdlib.h>
int main(){
  int nun,num1,num2,num3,aux;
  do{ 
  printf("Digite o primeiro numero (inteiro e positivo): \n");
  scanf("%d",&num1);
  printf("Digite o segundo numero (inteiro e positivo): \n");
  scanf("%d",&num2);
  printf("Digite o terceiro (inteiro e positivo): \n");
  scanf("%d",&num3);
  }while(num1==num2 ||num1==num3||num2==num3);
  printf("Escolha 1 para mostrar os números em ordem crescente\n");
  printf("Escolha 2 para mostrar os números em ordem decrescente\n");
  printf("Escolha 3 para mostar o menor número entre os demais\n");
  scanf("%d", &nun);
  switch(nun)
  {
  case 1:
  if(num1>num3){
     aux = num1;
     num1 = num3;
     num3 = aux;
   }
  if(num1>num2){
      aux =num1;
      num1 = num2;
      num2 = aux;
    }
  if(num2>num3){
    aux = num2;
    num2 =num3;
    num3 = aux;
   }
    printf("%d - %d - %d",num1,num2,num3);
    break;
  case 2:
    if(num1<num3){
     aux = num1;
     num1 = num3;
     num3 = aux;
   }
  if(num1<num2){
      aux =num1;
      num1 = num2;
      num2 = aux;
    }
  if(num2<num3){
    aux = num2;
    num2 =num3;
    num3 = aux;
   }
    printf("%d - %d - %d",num1,num2,num3);
    break;
  case 3:
    if(num1>num3){
     aux = num1;
     num1 = num3;
     num3 = aux;
   }
  if(num1>num2){
      aux =num1;
      num1 = num2;
      num2 = aux;
    }
  if(num2>num3){
    aux = num2;
    num2 =num3;
    num3 = aux;
   }
    printf("%d - %d - %d",num3,num1,num2);
    break;
  default:
    printf("Numero invalido!\n");
    break;
  } 
return 0;
  }