#include <stdio.h>
#include <math.h>
int main()
{
    int op;
    printf("\nQual exercício você quer executar?\n");
    scanf("%d" , &op);

  switch(op)
  {
    case 1:
        {int a, b, c;
        float media; 
        float desvio; 
        printf("\nDigite três números inteiros\n");
        scanf("%d %d %d", &a, &b, &c);
        printf("\nmedia = %.2f", ((a + b + c)/3.0));
        printf("\ndesvio = %.2f", sqrt(((a - media)*(a - media) + (b - media)*(b - media)+(c - media)*(c - media))/2));
        break;
        }
    case 2:
        {int x;
        printf("\nDigite um número qualquer:\n");
        scanf("%d", &x);
        if ((x +1)/((-2 * x) + 3.0) <= 0) {
        printf("\nO número satisfaz a equação\n");
        } 
        else {
        printf("\nO número não satisfaz a equação\n");
        }
        break;
        }
    case 3:
     {
      int tipo;
      int n1, n2, n3;
      printf("\nEscolha o tipo de media que voce deseja calcular\n");
      scanf("%d", &tipo);
      printf("\nDigite as tres notas\n");
      scanf("%d %d %d", &n1, &n2, &n3);
        if (tipo == 1) { 
        printf("media = %.2f", (n1 + n2 + n3)/3.0);
          }
        else if (tipo == 2) {
        printf("media = %.2f", ((3.0 * n1) + (3.0 * n2) + (4.0 * n3))/3);
         }
        else if (tipo == 3); {
        printf("media = %.2f", (3.0 / ((1.0/n1)+ (1.0/n2) + (1.0/n3))));
         }
        break;
      }
    case 4: 
    { 
     char sexo;
     int tempo_de_trabalho;
     float salario;

     printf("\nDigite o seu sexo\n");
     scanf(" %c", &sexo);
     printf("\nDigite o seu tempo de trabalho na empresa (em anos)\n");
     scanf("%d", &tempo_de_trabalho);
     printf("\nDigite o seu salario\n");
     scanf("%f", &salario);

      if (sexo == 'M' && tempo_de_trabalho >= 15) {
          printf("\nSeu bonus salarial é: R$%.2f \n", salario * 0.20 );
          }
      else if (sexo == 'F' && tempo_de_trabalho >= 10) {
          printf("\nSeu bonus salarial é: R$%.2f \n", salario * 0.25);
          }
      else {
          printf("\nSeu bonus salarial é: R$ 100,00");
         }
      break;
      } 
     } 
     return 0; 
     }