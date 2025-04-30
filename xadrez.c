#include <stdio.h>




int main(){

int i = 1;    
int torre,rainha,bispo;
char escolhaPeca;


printf("########## Bem bindo ao jogo de xadrez #########\n");
printf("#### nesse jogo você vai escolher com qual pec usar e seus movimentos #######\n");

printf("escolha uma peça para mover:\n");
printf("R - Rainha\n");
printf("T - Torre\n");
printf("B - Bispo\n");
scanf("%c", &escolhaPeca);


switch (escolhaPeca){

case 'R':
case 'r':
    /* code */
    printf("###quantas casas você ira mover a rainha:###\n");
    scanf("%d", &rainha); 
    
    while (i <= rainha){
        printf("esquerda\n");

        i++;
    }

    break;
case 'B':
case 'b':

    printf("###Quantas casas voce ira mover o Bispo###\n");
    scanf("%d", &bispo);

    do
    {
        printf("Cima, direita\n");
        i++;

    } while (i <= bispo);
    
break;

case 'T':
case 't':   

    printf("###Quantas casas voce quer mover a sua torre:\n");
    scanf("%d", &torre);

        for (i = 1; i <= torre; i++){

            printf("Direita\n");
        }


    break;



default:

    printf("#####Comando inválido#####\n");
    break;


}

return 0;

}