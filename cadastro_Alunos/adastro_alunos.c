/* No exercício a seguir, você deverá criar um programa  para cadastrar alunos. O objetivo deste exercício é aplicar os conhecimentos adquiridos até o momento no curso, com foco em estrutura de dados, manipulação de strings e controle de fluxo. Cadastro de Alunos:

O programa deve solicitar ao usuário as seguintes informações para cada aluno:

Nome completo

Idade

Número de matrícula

Curso
*/
#include <stdio.h>

// Variáveis para cadastro dos alunos
char nome[50], curso[10];
int idade, matricula;
float altura;

int main()
{
  printf("Sistema de cadastro de alunos\n");
  printf("Por favor, entre corretamente com os dados dos alunos\n");

  // Entrada de dados do aluno
  printf("Digite o nome do aluno: ");
  scanf(" %[^\n]", nome);

  printf("Digite o nome do curso que o aluno está matriculado: ");
  scanf(" %[^\n]", curso);

  printf("Insira a idade do aluno: ");
  scanf("%d", &idade);

  printf("Insira o número de matrícula do aluno: ");
  scanf("%d", &matricula);

  printf("Esta é uma informação adicional necessária caso o aluno opte por usar o uniforme da instituição\n");
  printf("Insira a altura do aluno: ");
  scanf("%f", &altura);

  // Exibição dos dados cadastrados
  printf("\nEstes são os dados cadastrados para o aluno %s:\n", nome);
  printf("Idade: %d anos\n", idade);
  printf("Altura: %.2f metros\n", altura);
  printf("Curso: %s\n", curso);
  printf("Matrícula: %d\n", matricula);

  return 0;
}