#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"
void Exibe_Aluno(ALUNO aluno);
void Preenche_Aluno(ALUNO *aluno);
int main()
{
    ALUNO thiago;
    Preenche_Aluno(&thiago);
    Exibe_Aluno(thiago);
    return 0;
}
