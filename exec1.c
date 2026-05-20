#include <stdio.h>

int main() {
    float notas[8];
    float frequencia;
    int i;

    int aprovados = 0;
    int reprovados = 0;

    float maiorNota = 0;
    
    for(i = 0; i < 8; i++){
        printf("Qual a nota %dº: ", i+1);
        scanf("%f", &notas[i]);
        
        printf("Qual a frequencia %dº: ", i+1);
        scanf("%f", &frequencia);
        
        if(notas[i] >= 7 && frequencia >= 75){
            aprovados++;
        }else{
            reprovados++;
        }
        
        if(i==0 || notas[i] > maiorNota){
            maiorNota = notas[i];
        }
    }
    
    printf("Quantidade de aprovados: %d\n", aprovados);
    printf("Quantidade de reprovados: %d\n", reprovados);
    printf("Maior nota: %.2f\n", maiorNota);

    return 0;
}