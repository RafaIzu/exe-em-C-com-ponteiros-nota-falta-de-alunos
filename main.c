#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[30];
    float medias;
    int faltas;
}Aluno;

int main()
{
    int numAlunos,i;
    printf("\nDigite o numero de alunos:\n");
    scanf("%d",&numAlunos);
    Aluno*a=(Aluno*)malloc(numAlunos*sizeof(Aluno));

    for(i=0;i<numAlunos;i++)
    {
        printf("\n----------Aluno %d-----------\n",i+1);
        printf("\nNome:\n");
        scanf("%s",a[i].nome);
        printf("\nMedia:\n");
        scanf("%f",&a[i].medias);
        printf("\nFaltas:\n");
        scanf("%d",&a[i].faltas);

    }

    printf("\n---------------Relatorio---------------\n");

    for (i=0;i<numAlunos;i++)
    {
        printf("\n----------Aluno %d-----------\n",i+1);
        printf("\nAluno: %s\n",a[i].nome);
        printf("\nMedia:%.2f\n",a[i].medias);
        printf("\nFaltas:%d\n",a[i].faltas);
    }

    free(a);
    a=NULL;
    return 0;
}
