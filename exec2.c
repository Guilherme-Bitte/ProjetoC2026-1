#include <stdio.h>

int main() {
    float vendas[10];
    int vendaEspecial;
    int i;

    float totalVendido = 0;
    int destaque = 0;
    int comum = 0;
    for(i = 0; i < 10; i++){
        printf("Qual o valor da venda %dº: ", i+1);
        scanf("%f", &vendas[i]);
        printf("Foi uma venda especial? (1-Sim ou 2-Nao): ", i+1);
        scanf("%d", &vendaEspecial);
        
        
        if(vendas[i] >= 100 || vendaEspecial == 1){
            destaque++;
        }else{
            comum++;
        }
        
            totalVendido += vendas[i];
    }
    
    printf("Total de vendas: %.2f\n", totalVendido);
    printf("Quantidade de vendas com destaque: %d\n", destaque);
    printf("Quantidade de vendas comuns: %d\n", comum);

    return 0;
}