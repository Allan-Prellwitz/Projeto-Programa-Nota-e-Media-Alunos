#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int contador, contador_alunos, x, y, z; //contadores
    float media[y], nota[y][3];
    char resposta, nome_lista[y][100];

    do{
    //Quantidade de alunos e os seus nomes
        printf("Quantidade de alunos: ");
        scanf("%d", &x);
        if (x==0)
            return 0;
        printf("\n");
        contador_alunos=1;
        for(y=0; y<x; y++)
        {
            printf("Digite o nome do aluno %d: ", contador_alunos);
            scanf("%s[^\n]", nome_lista[y]);
            scanf("%c");
            printf("\n");
            //Entrada das respectivas notas
            z=0;
            contador=1;
            do
            {
                printf("Digite a nota bimestre %d: ", contador);
                scanf("%f", &nota[y][z]);
                z++;
                contador++;
            }while(z<4);
        printf("\n");
        contador_alunos++;
        }

    //C�lculo das m�dias
        y=0;
        do
            {
                media[y]=((nota[y][0]+nota[y][1]+nota[y][2]+nota[y][3])/4);
                y++;
            }while(y<x);
        y=0;
        system("cls");

    //Tabela Final
        printf("Nome\t\tNota 1\tNota 2\tNota 3\tNota 4\tM�dia\tResultado");
        do
            {
                printf("\n%s\t\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t", nome_lista[y], nota[y][0], nota[y][1], nota[y][2], nota[y][3], media[y]);
                if (media[y]>=7)
                    printf("Aprovado");
                else
                    printf("Reprovado");
                y++;
            }while(y<x);
        printf("\nDeseja iniciar um novo arquivo?\n<s/n>:");
        scanf("%s", &resposta);
        system("cls");
    }while(resposta=='s');
    return 0;
}
