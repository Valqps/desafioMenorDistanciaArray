#include <stdio.h>

int main(){
    int vetor1[] = {0, 1, 2, 10, -5, -100, 20, -150, 40, 332, 100};
    int vetor2[] = {-20, 5, 4, -10, 200, 400, 25, -25, 1000, 32, -500};
    int tamanho_vetor1 = sizeof(vetor1)/sizeof(vetor1[0]);
    int tamanho_vetor2 = sizeof(vetor2)/sizeof(vetor2[0]);
    int i;
    int j;
    int diferenca;
    int menor_diferenca = (vetor1[0] - vetor2[0])*(vetor1[0] - vetor2[0]);
    int numero_vetor1 = vetor1[0];
    int numero_vetor2 = vetor2[0];
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
    printf("A menor distancia e a combinacao do numero %d do vetor 1 com o numero %d do vetor 2, resultando em %d\n", numero_vetor1, numero_vetor2, menor_diferenca);
    return 0;
}
