#include <stdio.h>
#include <stdlib.h>
#include "users.h"

int main(void){
    int entrada, flag = 0, flag1 = 0, deletar;
    char NomeTemp[50];
    char  NomeEmpregadoTemp[50];
    char DataNascimentoTemp[20];
    float salarioTemp;
    int idade, numDependente;

    int CodEmpregado = 0;

    CodEmpregado = codigoEmpregado(buscarUltimoEmpregado());


    while (flag == 0)
    {
        flag1 = 0;

        printf("0 - Cadastrar empregado\n");
        printf("1 - Cadastrar dependente\n");
        printf("2 - Encontrar empregado pelo nome\n");
        printf("3 - Encontrar empregados pela idade\n");
        printf("4 - Encontrar empregados pelo numero de dependentes\n");
        printf("5 - Encontrar dependente pelo nome\n");
        printf("6 - Encontrar dependentes pala idade\n");
        printf("7 - Encontrar nome dos dependentes de um empregado\n");
        printf("8 - Encontrar ultimo usuario cadastrado no sistema\n");
        printf("9 - Encontrar empregado com maior salario\n");
        printf("10 - Encontrar empregado com menor salario\n");
        printf("11 - Sair\n\n");


        scanf("%d",&entrada);
        switch (entrada)
        {
        case 0:
            while (flag1 == 0)
            {       
                printf("\nInforme o nome do empregado: ");
                scanf("%s",&NomeTemp);
                printf("\nInforme a data de nascimento do empregado:");
                scanf("%s",&DataNascimentoTemp);
                printf("\nInforme o salario do empregado: ");
                scanf("%f",&salarioTemp);
                printf("\n\n");
                if(cadastrarEmpregado(CodEmpregado, NomeTemp, DataNascimentoTemp, salarioTemp) != NULL){
                    printf("\nEmpregado cadastrado com sucesso\n");
                    printf("\n\n");
                    flag1 = 1;
                }else
                {
                    printf("\nErro ao cadastrar empregado\n");
                    printf("Deseja tentar cadastrar o empregado novamente:\n 0 - Sim\n 1 - Nao\n");
                    scanf("%d",&flag1);
                    printf("\n\n");
                }
            }
            break;
        case 1:
            while (flag1 == 0)
            {
                printf("\nInforme o nome do dependente: ");
                scanf("%s",&NomeTemp);
                printf("\nInforme a data de nascimento do dependente:");
                scanf("%s",&DataNascimentoTemp);
                printf("\nInforme o nome do empregado de quem é dependente: ");
                scanf("%s",&NomeEmpregadoTemp);
                printf("\n\n");
                if(cadastrarDependente( NomeTemp, DataNascimentoTemp, NomeEmpregadoTemp) != NULL){
                    printf("\nDependente cadastrado com sucesso\n");
                        flag1 = 1;
                }else
                {
                    printf("\nErro ao cadastrar dependente\n");
                    printf("Deseja tentar cadastrar o dependente novamente:\n 0 - Sim\n 1 - Nao");
                    scanf("%d",&flag1);   
                    printf("\n\n");         
                }
            }
            break;
        case 2:
            while (flag1 == 0)
            {       
                printf("\nInforme o nome do empregado: ");
                scanf("%s",&NomeTemp);
                printf("\n\n");
                if(buscarEmpregadoNome(NomeTemp) != NULL){
                    imprimeEmpregado(buscarEmpregadoNome(NomeTemp));
                    printf("\nDeseja remover este empregado:\n"
                            "0 - Sim\n 1 - Nao\n");
                    scanf("%d",&deletar);
                    printf("\n\n");
                    if (deletar == 0)
                        excluirEmpregado(buscarEmpregadoNome(NomeTemp));                   
                    printf("\nDeseja encontrar outro empregado:\n0 - Sim\n 1 - Nao");
                    scanf("%d",&flag1); 
                    printf("\n\n"); 
                }else
                {
                    printf("\nEmpregado nao encontrado: ");
                    printf("\nDeseja encontrar outro empregado:\n0 - Sim\n 1 - Nao\n");
                    scanf("%d",&flag1); 
                    printf("\n\n"); 
                }  
            }
            break;
        case 3:
            while (flag1 == 0)
            {       
                printf("\nInforme a idade minima dos empregados a serem encontrados: ");
                scanf("%d",&idade);
                printf("\n\n");
                if(buscarEmpregadoIdade(idade) != NULL){
                    imprimeEmpregado(buscarEmpregadoIdade(idade));
                    printf("\nDeseja remover estes empregados:\n"
                            "0 - Sim\n 1 - Nao\n");
                    scanf("%d",&deletar);
                    printf("\n\n");
                    if (deletar == 0)
                        excluirEmpregados(buscarEmpregadoIdade(idade));
                    printf("\nDeseja encontrar outros empregados com outra idade minima:\n 0 - Sim\n 1 - Nao\n");
                    scanf("%d",&flag1);  
                    printf("\n\n");
                }else
                {
                    printf("\nEmpregados nao encontrados: ");
                    printf("\nDeseja encontrar outros empregados com outra idade minima:\n 0 - Sim\n 1 - Nao\n");
                    scanf("%d",&flag1);  
                    printf("\n\n");
                }  
            }
            break;
        case 4:
            while (flag1 == 0)
            {       
                printf("\nInforme numero minimo de dependentes dos empregados a serem encontrados: ");
                scanf("%d",&numDependente);
                printf("\n\n");
                if(buscarNumeroDependentes(numDependente) != NULL){
                    imprimeEmpregado(buscarNumeroDependentes(numDependente));
                    printf("\nDeseja remover estes empregados:\n"
                            "0 - Sim\n 1 - Nao\n");
                    scanf("%d",&deletar);
                    printf("\n\n");
                    if (deletar == 0)
                        excluirEmpregados(buscarNumeroDependentes(numDependente));
                    printf("\nDeseja encontrar outros empregados com outro numero minimo de dependentes:\n"
                            "0 - Sim\n 1 - Nao\n");
                    scanf("%d",&flag1);  
                    printf("\n\n");
                }else
                {
                    printf("\nEmpregados nao encontrados: ");
                    printf("\nDeseja encontrar outros empregados com outro numero minimo de dependentes:\n"
                            "0 - Sim\n 1 - Nao\n");
                    scanf("%d",&flag1);  
                    printf("\n\n");
                }  
            }
            break;
        case 5:
            while (flag1 == 0)
            {       
                printf("\nInforme o nome do dependente: ");
                scanf("%s",&NomeTemp);
                printf("\n\n");
                if(buscarDependenteNome(NomeTemp) != NULL){
                    imprimeDependente(buscarDependenteNome(NomeTemp));
                    printf("\nDeseja remover este dependente:\n"
                            "0 - Sim\n 1 - Nao\n");
                    scanf("%d",&deletar);
                    printf("\n\n");
                    if (deletar == 0)
                        excluirDependente(buscarDependenteNome(NomeTemp));
                    printf("\nDeseja encontrar outro Dependente:\n"
                            "0 - Sim\n 1 - Nao\n");
                    scanf("%d",&flag1);  
                    printf("\n\n");
                }else
                {
                    printf("\nDependente nao encontrado: ");
                    printf("\nDeseja encontrar outro Dependente:\n"
                            "0 - Sim\n 1 - Nao\n");
                    scanf("%d",&flag1);  
                    printf("\n\n");
                }  
            }
            break;
        case 6:
            while (flag1 == 0)
            {       
                printf("\nInforme a idade maxima dos dependentes a serem encontrados: ");
                scanf("%d",&idade);
                printf("\n\n");
                if(buscarDependenteIdade(idade) != NULL){
                    imprimeDependente(buscarDependenteIdade(idade));
                    printf("\nDeseja remover estes dependentes:\n"
                            "0 - Sim\n 1 - Nao\n");
                    scanf("%d",&deletar);
                    if (deletar == 0)
                        excluirDependentes(buscarDependenteIdade(idade));
                    printf("\nDeseja encontrar outros dependentes com outra idade maxima:\n"
                            "0 - Sim\n 1 - Nao\n");
                    scanf("%d",&flag1);  
                    printf("\n\n");
                }else
                {
                    printf("\nDependentes nao encontrados: ");
                    printf("\nDeseja encontrar outros dependentes com outra idade maxima:\n"
                            "0 - Sim\n 1 - Nao\n");
                    scanf("%d",&flag1);  
                    printf("\n\n");
                }  
            }
            break;
        case 7:
            while (flag1 == 0)
            {       
                printf("\nInforme o nome do empregado: ");
                scanf("%s",&NomeTemp);
                if(buscarEmpregadoNome(NomeTemp) != NULL){
                    imprimeNomesDependentes(buscarEmpregadoNome(NomeTemp));
                    printf("\nDeseja remover estes dependentes:\n"
                            "0 - Sim\n 1 - Nao\n");
                    scanf("%d",&deletar);
                    printf("\n\n");
                    if (deletar == 0)
                        excluirDependentes(buscarEmpregadoDependentes(buscarEmpregadoNome(NomeTemp)));
                    printf("\nDeseja encontrar dependentes de outro empregado:\n"
                            "0 - Sim\n 1 - Nao\n");
                    scanf("%d",&flag1);  
                    printf("\n\n");
                }else
                {
                    printf("\nEmpregado nao encontrado: ");
                    printf("\nDeseja encontrar dependentes de outro empregado:\n"
                            "0 - Sim\n 1 - Nao\n");
                    scanf("%d",&flag1);  
                    printf("\n\n");
                }  
            }
            break;
        case 8:
            printf("\nO ultimo empregado cadastrado no sistema foi:\n");
            imprimeEmpregado(buscarUltimoEmpregado());
            printf("\nDeseja remover este empregado:\n"
                   "0 - Sim\n 1 - Nao\n");
            scanf("%d",&deletar);
            printf("\n\n");
            if (deletar == 0)
                excluirEmpregado(buscarUltimoEmpregado()); 
            break;
        case 9:
            printf("\nO empregado maior salario e:\n");
            imprimeEmpregado(buscarEmpregadoMaiorSalario());
            printf("\nDeseja remover este empregado:\n"
                            "0 - Sim\n 1 - Nao\n");
            scanf("%d",&deletar);
            printf("\n\n");
            if (deletar == 0)
                excluirEmpregado(buscarEmpregadoMaiorSalario()); 
            break;
        case 10:
            printf("\nO empregado menor salario e:\n");
            imprimeEmpregado(buscarEmpregadoMenorSalario());
            printf("\nDeseja remover este empregado:\n"
                    "0 - Sim\n 1 - Nao\n");
            scanf("%d",&deletar);
            printf("\n\n");
            if (deletar == 0)
                excluirEmpregado(buscarEmpregadoMenorSalario()); 
            break;
        case 11:
            flag = 1;
        break;  
        default:
            break;
        }
    }   
}