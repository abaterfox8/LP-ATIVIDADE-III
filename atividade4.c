#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int numero[5];
    int i;
    int impar =0;
    int par =0;
    int qntNegativos=0;
    int maior =0;
    int menor=9999;
    int sPar =0;
    int sNumero =0;
    float mPar =0;
    float mNumero =0;

    for (i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numero[i]);
        system ("cls || clear");

        if (numero[i] % 2 == 0) {
            par++;
            sPar+=numero[i];
        }else{
            impar++;
        } 

        if (numero[i] < 0) {
            qntNegativos++;
        }
        
        sNumero+=numero[i];
        
        maior = numero[i] > maior ? numero[i] : maior;
        menor = numero[i] < menor ? numero[i] : menor;

    }

        mNumero = sNumero / i;
            
        if (par > 0) {
        mPar = sPar /  par; 
       }
        
        printf("Quantidade de numeros impares: %d \n", impar);
        printf("Quantidade de numeros negativos: %d \n", qntNegativos);
        printf("Maior numero: %d \n", maior);
        printf("Menor numero: %d \n", maior);
        printf("Média numeros pares: %.1f \n", mPar);
        printf("Média numeros total: %.1f \n", mNumero);


    return 0;
}