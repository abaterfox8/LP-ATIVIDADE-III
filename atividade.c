#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int idade[5];
    char nome[5][200];
    float peso[5];
    float altura[5];
    int i;
    int menorId = 99999, maiorId = 0;
    float  menorAlt = 9999, maiorAlt = 0;
    float menorPs = 999, maiorPs = 0;
    char nMaiorAlt[200];
    char nMenorAlt[200];
    char nMaiorId[200];
    char nMenorId[200];
    char nMaiorPs[200];
    char nMenorPs[200];

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome: ");
        gets(nome[i]);
        printf("Digite a idade: ");
        scanf("%d", &idade[i]);

        printf("Digite o peso: ");
        scanf("%f", &peso[i]);

        printf("Digite a altura: ");
        scanf("%f", &altura[i]);

        system("cls || clear");

        if (altura[i] > maiorAlt)
        {
            maiorAlt = altura[i];
            strcpy(nMaiorAlt, nome[i]);
        }
        if (altura[i] < menorAlt)
        {
            menorAlt = altura[i];
            strcpy(nMenorAlt, nome[i]);
        }

        if (idade[i] > maiorId)
        {
            maiorId = idade[i];
            strcpy(nMaiorId, nome[i]);
        }
        if (idade[i] < menorId)
        {
            menorId = idade[i];
            strcpy(nMenorId, nome[i]);
        }

        if (peso[i] > maiorPs)
        {
            maiorPs = peso[i];
            strcpy(nMaiorPs, nome[i]);
        }

        if (peso[i] < menorPs)
        {
            menorPs = peso[i];
            strcpy(nMenorPs, nome[i]);
        }
        fflush(stdin);
    }

    printf("\nPessoa com a maior altura: %s  %.2f \n", nMaiorAlt, maiorAlt);
    printf("\nPessoa com a menor altura: %s  %.2f \n", nMenorAlt, menorAlt);
    
    printf("\nPessoa com o maior peso: %s  %.2f \n", nMaiorPs, maiorPs);
    printf("\nPessoa com o menor peso: %s  %.2f \n", nMenorPs, menorPs);
    
    printf("\nPessoa com a maior idade: %s  %d \n", nMaiorId, maiorId);
    printf("\nPessoa com a menor idade: %s  %d \n", nMenorId, menorId);



    return 0;
}
