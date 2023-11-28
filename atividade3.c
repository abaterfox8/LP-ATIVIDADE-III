#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n;
    char nome[999][200];
    char numeroTel[999][200];
    int i;
    int salvo = 0;

    do
    {
        printf("1 - Salvar novo numero. \n");
        printf("2 - Exibir os numeros salvos. \n");
        printf("\nDigite a opcao ");
        scanf("%d", &n);
        printf("\n");

        fflush(stdin);

        switch (n)
        {

        case 1:

            printf("Digite o nome do contato: ");
            gets(nome[salvo]);

            printf("Digite o numero do whatsapp: ");
            gets(numeroTel[salvo]);

            salvo++;
            break;

        case 2:

            for (i = 0; i < salvo; i++)
            {

                printf("Nome do contato: %s \n", nome[i]);
                printf("Numero do whatsapp: %s \n", numeroTel[i]);
                printf("\n");
            }

            break;

        default:
            printf("Opção invalida. \n");
            break;
        }

    } while (n != 2);

    return 0;
}