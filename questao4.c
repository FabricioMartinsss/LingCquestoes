//Fatorial
#include <stdio.h>
#include <math.h>
int main(void) {
  int num;
while(num!=0){
  int fat,i;
  fat=1;
  printf("Digite um numero: \n");
  scanf("%d", &num);
  if(num<0){ 
    printf("Numero negativo nao tem valor de fatorial!\n ");
  }else if(num==0){
    printf("ENCERRADO!\N");
  }else{
    for( i= 1; i<=num; i++) 
      fat*=i;
       setbuf(stdin,NULL);
      printf("O fatorial de %d é %d\n",num,fat);
  }
}
  return 0;
}