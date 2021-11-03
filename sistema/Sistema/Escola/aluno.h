#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int matricula;
    char nome[45];
    char email[45];
    char situacao[45];
    char sexo[15];

    char nascionalidade[45];
    char pais_origem[45];
    char uf_1[15];
    char cpf[45];
    char rg[45];
    char org_emiss[45];
    char uf_2[15];
}ALUNO;
void Exibe_Aluno(ALUNO aluno)
{
     printf("\n\n -  CARREGANDO ALUNO   -  \n\n");
    sleep(2);
    system("cls");
    printf("\n\n - INFORMACOES DO ALUNO -  \n\n");
    printf("- Nome                   : %s\n",aluno.nome);
    printf("- Email                  : %s\n",aluno.email);
    printf("- Situacao               : %s\n",aluno.nome);
    printf("- Sexo                   : %s\n",aluno.nome);
    printf("\n\n -     DOCUMENTACAO     -  \n\n");
    printf("- Nacionalidade          : %s\n",aluno.nascionalidade);
    printf("- Pais de origem         : %s\n",aluno.pais_origem);
    printf("- UF                     : %s\n",aluno.uf_1);
    printf("- CPF                    : %s\n",aluno.cpf);
    printf("- RG                     : %s\n",aluno.rg);
    printf("- Origem Emissao         : %s\n",aluno.org_emiss);
    printf("- UF                     : %s\n",aluno.uf_2);




}
void Preenche_Aluno(ALUNO *aluno)
{
    printf(" - INFORMACOES DO ALUNO -  \n\n");
    printf("- Nome              : ");
    gets( aluno->nome);
    printf("- E-mail            : ");
    gets( aluno->email);
    printf("- Situacao          : ");
    gets( aluno->situacao);
    printf("- Sexo (M)(F)       : ");
    gets( aluno->sexo);
    printf("\n\n -     DOCUMENTACAO     -  \n\n");
    printf("- Nacionalidade     : ");
    gets( aluno->nascionalidade);
    printf("- Pais de origem    : ");
    gets( aluno->pais_origem);
    printf("- UF                : ");
    gets( aluno->uf_1);
    printf("- CPF               : ");
    gets( aluno->cpf);
    printf("- RG                : ");
    gets( aluno->rg);
    printf("- Origem Emissao    : ");
    gets( aluno->org_emiss);
    printf("- UF                : ");
    gets( aluno->uf_2);
}

#endif // ALUNO_H_INCLUDED
