#include <stdio.h>
#include <stdlib.h>
#include "users.h"






//cadastra o empregado no sistema
Empregado* cadastrarEmpregado(int cod, char* nome, char* dataNascimento, float salario){return NULL;}


//exclui o usuario do sistema
//O empregado a ser excluido deve ser selecionado a partir das consultas possiveis
void excluirEmpregado(Empregado* emp){}

//exclui o usuario do sistema
//O conjunto de empregados devem ser excluidos
void excluirEmpregados(Empregado* emp){}


//Encontra um empregado pelo nome
Empregado* buscarEmpregadoNome(char* nome){return NULL;}

//Encontra os empregados com idade maior que o valor fornecido
Empregado* buscarEmpregadoIdade(int idade){return NULL;}

//Encontra os empregados com mais dependentes que o valor fornecido
Empregado* buscarNumeroDependentes(int numeroDependentes){return NULL;}

//Encontra o ultimo empregado cadastrado no sistema
Empregado* buscarUltimoEmpregado(){return NULL;}

//Encontra o empregado com o maior salario
Empregado* buscarEmpregadoMaiorSalario(){return NULL;}

//Encontra o empregado com o menor salario
Empregado* buscarEmpregadoMenorSalario(){return NULL;}



//Imprime os dados do empregado
void imprimeEmpregado(Empregado* emp){}



int codigoEmpregado(Empregado* emp){return 0;}