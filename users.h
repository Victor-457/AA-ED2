#define USERS_H

#include <stdlib.h>
#include <stdio.h>

typedef struct empregado {
    int Cod;
    char Nome[50];
    char DataNascimento[20];
    float salario;
} Empregado;

typedef struct dependente {
    int CodDependente;
    int CodEmpregado;
    char Nome[50];
    char DataNascimento[20];
} Dependente;



//cadastra o empregado no sistema
Empregado* cadastrarEmpregado(int cod, char* nome, char* dataNascimento, float salario);

//cadastra o dependente no sistema
//A partir do nome do empregado tem que buscar o codigo dele pra associar com o dependente
Dependente* cadastrarDependente( char* nome, char* dataNascimento, char* nomeEmpregado);

//exclui o usuario do sistema
//O empregado a ser excluido deve ser selecionado a partir das consultas possiveis
void excluirEmpregado(Empregado* emp);

//exclui o usuario do sistema
//O conjunto de empregados devem ser excluidos
void excluirEmpregados(Empregado* emp);

//exclui o usuario do sistema
//O dependente a ser excluido deve ser selecionado a partir das consultas possiveis
void excluirDependente(Dependente* dependente);

//exclui o usuario do sistema
//O conjunto de dependentes devem ser excluidos
void excluirDependentes(Dependente* dependente);

//Encontra um empregado pelo nome
Empregado* buscarEmpregadoNome(char* nome);

//Encontra os empregados com idade maior que o valor fornecido
Empregado* buscarEmpregadoIdade(int idade);

//Encontra os empregados com mais dependentes que o valor fornecido
Empregado* buscarNumeroDependentes(int numeroDependentes);

//Encontra o ultimo empregado cadastrado no sistema
Empregado* buscarUltimoEmpregado();

//Encontra o empregado com o maior salario
Empregado* buscarEmpregadoMaiorSalario();

//Encontra o empregado com o menor salario
Empregado* buscarEmpregadoMenorSalario();

//Encontra os dependentes do empregado
Dependente* buscarEmpregadoDependentes(Empregado* emp);

//Encontra os dependentes com o nome fornecido
Dependente* buscarDependenteNome(char* nome);

//Encontra os dependentes com idade menores que o valor fornecido
Dependente* buscarDependenteIdade(int idade);

//Imprime os dados do empregado
void imprimeEmpregado(Empregado* emp);

//Imprime os dados do dependente
void imprimeDependente(Dependente* dependente);

//Imprime os nomes dos dependentes de um determinado empregado
void imprimeNomesDependentes(Empregado* emp);

int codigoEmpregado(Empregado* emp);