#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "func.c"
#define MAX 1
/********************
 * 
 * Alterar senha
 * */

//listar todos os usuarios cadastrados ADM 8646899;
int main() {

    int op;

    IniciaVetor();

    while (op != 0)
    {   
        sleep(2);
        system("clear");
        printf("\n");
        printf("\t Bem vindo ao banco FATEC! \n");
        printf("\n");
        printf(" [1]-Cadastre-se\n [2]-Login\n [3]-Alterar senha \n [0]-Sair \n");
        printf("Insira a opção desejada: ");
        scanf("%d", &op);
        switch (op)
        {
        case 0:
            printf("\n Encerrando... \n");
            break;
        case 1:
            printf("\n");
            Cadastro();
            printf("\n");
            break;
        case 2:
            printf("\n");
            Login();
            printf("\n");
            break;
        case 3:
            printf("\n");
            AlterarSenha();
            printf("\n");
            break;
        case 8646899:
            Listar();
            break;
    
        default:
            printf("\n Digite uma opção valida, veja a lista abaixo:");
            printf("\n");
            break;
        }
    }
  return 0;
}