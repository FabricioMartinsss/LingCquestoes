
     #include <stdio.h>     

    int idd,ps,altr,i=0,iddtotal,s,z;
    float mediadasidades,porcentagem;

     int main (){
          
          while (i<=9){
                i=i+1;
          
                printf("pessoa %d preencehndo :) \n",i);
                printf("preencha sua idade:\n ");
                scanf("%d",&idd);
                printf("preencha eu peso:\n ");
                scanf("%f",&ps);
                printf("preencha sua altura:\n ");
                scanf("%f",&altr);

                 iddtotal=iddtotal+idd;
                 if (altr<1.50 && ps>80 ){

                     s=s+1;

                }
                 if (idd>=10 && idd<=30 && altr>1.90){

                      z=z+1;

                }
        }

        mediadasidades=iddtotal/10;
        porcentagem=(z/10)*100;

        printf("%.2lf e a medi da idade das pessoas que preechera as perguntas\n",mediadasidades);
        printf("pessoas com peso superior a 80 kg e altura inferior a 1,50 metros, sao %d pessoas que atendem esse criterio\n",s);
        printf("sao %.2lf pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m \n",porcentagem);      
     }