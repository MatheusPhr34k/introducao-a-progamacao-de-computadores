#include <stdio.h>
#include <locale.h>
int main()
{
  int pessoa_1, pessoa_2, Pessoa_3;
  float media_idade;
  printf("#############################################\n");
  printf("# Bem vindo a Calculadora de media de idade #\n");
  printf("#############################################\n");
  printf("Digite a idade da primeira Pessoa: ");
  scanf("%d", &pessoa_1);
  printf("Digite a idade da segunda Pessoa: ");
  scanf("%d", &pessoa_2);
  printf("Digite a idade da terceira Pessoa: ");
  scanf("%d", &Pessoa_3);
  printf("Calculando a media...");
  media_idade = (pessoa_1 + pessoa_2 + Pessoa_3) / 3.0;
  printf("A media de idades:%.2f\n ", media_idade);
  printf("Pressione qualquer tecla para finalizar o programa...\n");
  getchar();
  getchar();
  return 0;
}
/* Exercício: Calculadora de Média de Idade

Objetivo: Criar um programa em C que leia as idades de três pessoas, calcule a média das idades e exiba o resultado.

Instruções:

Declare três variáveis inteiras para armazenar as idades das três pessoas.

Declare uma variável float para armazenar a média das idades.

Use printf para solicitar que o usuário insira a idade de cada pessoa.

Use scanf para ler e armazenar as idades nas variáveis.

Calcule a média das idades.

Use printf para exibir a média das idades.

Dica:

Lembre-se de usar o operador & com scanf para ler os valores de entrada.

Para calcular a média, some as três idades e divida o resultado pelo número de pessoas (3). */