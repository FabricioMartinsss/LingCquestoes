#include <stdio.h>
#include<math.h>
  int main(void) {
    double potencia2,potencia3,raizQ,raizC;
    int resto,numero;
    do{
    printf("Olá, por gentileza digite um numero maior que 0:\n");
    scanf("%d", &numero);
   } while(numero<=0);
    potencia2 = pow (numero,2);
    potencia3 = pow (numero,3);
    raizQ = sqrt (numero);
    raizC = cbrt(numero);
    resto = numero % 3;
    printf("Você escolheu o numero: %d\n",numero);
    printf("%d elevado ao quadrado é %8.2lf\n",numero,potencia2);
    printf("%d elevado ao cubo é %8.2lf\n",numero,potencia3);
    printf("A raiz quadrada de %d é %8.2lf\n",numero,raizQ);
    printf("A raiz cubica de %d é %8.2lf\n",numero,raizC);
    printf("o resto da divisao de %d por 3 é %8.2d\n",numero,resto);
    return 0;
  }
 