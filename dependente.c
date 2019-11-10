#include <stdio.h>
#include <stdlib.h>
#include "users.h"


//cadastra o dependente no sistema
//A partir do nome do empregado tem que buscar o codigo dele pra associar com o dependente
Dependente* cadastrarDependente( char* nome, char* dataNascimento, char* nomeEmpregado){return NULL;}

//exclui o usuario do sistema
//O dependente a ser excluido deve ser selecionado a partir das consultas possiveis
void excluirDependente(Dependente* dependente){}

//exclui o usuario do sistema
//O conjunto de dependentes devem ser excluidos
void excluirDependentes(Dependente* dependente){}

//Encontra os dependentes do empregado
Dependente* buscarEmpregadoDependentes(Empregado* emp){return NULL;}

//Encontra os dependentes com o nome fornecido
Dependente* buscarDependenteNome(char* nome){return NULL;}

//Encontra os dependentes com idade menores que o valor fornecido
Dependente* buscarDependenteIdade(int idade){return NULL;}


//Imprime os dados do dependente
void imprimeDependente(Dependente* dependente){}

//Imprime os nomes dos dependentes de um determinado empregado
void imprimeNomesDependentes(Empregado* emp){}

