#include <stdio.h>

int main() {
    float temperaturas[7];
    int i;

    int seguras = 0;
    int foraFaixa = 0;

    float soma = 0;
    float media;
    
    for(i = 0; i < 7; i++){
        printf("Qual a temperatura %dº: ", i+1);
        scanf("%f", &temperaturas[i]);
        
         if(temperaturas[i] >= 20 && temperaturas[i] <= 30){
            seguras++;
            printf("Temperatura Segura\n");
        }else{
            foraFaixa++;
            printf("Temperatura Fora da Faixa\n");
        }
        soma += temperaturas[i];
    }
    
            media = soma / 7; 
    
    printf("A media é igual a %.2f\n", media);
    printf("Quantidade de temperaturas seguras: %d\n", seguras);
    printf("Quantidade de temperaturas fora da faixa: %d\n", foraFaixa);


    return 0;
}