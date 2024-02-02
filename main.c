#include <stdio.h>

int main(){
    int i;
    int j;

    //recebendo informações do usuário
    int tamanho_vetor1 = 0;
    while(tamanho_vetor1 < 10){
        printf("Diga o tamanho do vetor 1. Ele deve ser maior ou igual a 10.\n");
        scanf("%d", &tamanho_vetor1);
    }
    int vetor1[tamanho_vetor1];
    printf("Agora digite os valores: \n");
    for (i=0; i < tamanho_vetor1; i++){
        scanf("%d", &vetor1[i]);
    }

    int tamanho_vetor2 = 0;
    while(tamanho_vetor2 < 10){
        printf("Diga o tamanho do vetor 2. Ele deve ser maior ou igual a 10.\n");
        scanf("%d", &tamanho_vetor2);
    }
    int vetor2[tamanho_vetor2];
    printf("Agora digite os valores: \n");
    for (i=0; i < tamanho_vetor2; i++){
        scanf("%d", &vetor2[i]);
    }

    int diferenca;

    // para não ter risco de o número inicializado em menor_diferença ser o menor, iniciei com a distância entre os primeiros valores dos dois vetores. No entanto, esse valor poderia ser alto mas negativo, dificultando a comparação. Portanto fiz ao quadrado para remover valores negativos, sendo que um valor ao quadrado de um número inteiro é sempre maior ou igual a ele.
    int menor_diferenca = (vetor1[0] - vetor2[0])*(vetor1[0] - vetor2[0]);

    //inicialização dos numeros utilizados para calcular a diferença
    int numero_vetor1 = vetor1[0];
    int numero_vetor2 = vetor2[0];

    //fazendo a combinação entre os valores do vetor1 e do vetor2, calculando as diferenças positivas, avaliando se é a menor, e caso sim, salvando em menor_diferenca. Salvando também os valores usados para a menor distância em numero_vetor1 e numero_vetor2.
    for (i=0; i < tamanho_vetor1; i++){
        for (j=0; j < tamanho_vetor2; j++){
            diferenca = vetor1[i] - vetor2[j];
            if (diferenca < 0){
                diferenca = 0 - diferenca;
            }
            if (diferenca < menor_diferenca){
                menor_diferenca = diferenca;
                numero_vetor1 = vetor1[i];
                numero_vetor2 = vetor2[j];
            }
        }
    }

    //imprimindo o resultado
    printf("A menor distancia e a combinacao do numero %d do vetor 1 com o numero %d do vetor 2, resultando em %d\n", numero_vetor1, numero_vetor2, menor_diferenca);

    return 0;
}
