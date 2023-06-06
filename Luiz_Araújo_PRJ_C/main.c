#include <stdio.h>
#include <stdlib.h>
#include <conio.c>
#include <windows.h>
#include <locale.h>
#include <string.h>

struct pop
{
    char nome[50], nomearq[50];
    char senha[50], senhaarq[50];
} login;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int opcao;
    int found;

    printf(R"EOF(________       ______             ______       _____________                         _____
__  ___/__________  /_____ __________  /_      ___  __ \__(_)________________ __________(_)_____ _
_____ \___  __ \_  /_  __ `/_  ___/_  __ \     __  /_/ /_  /___  /__  /_  __ `/_  ___/_  /_  __ `/
____/ /__  /_/ /  / / /_/ /_(__  )_  / / /     _  ____/_  / __  /__  /_/ /_/ /_  /   _  / / /_/ /
/____/ _  .___//_/  \__,_/ /____/ /_/ /_/      /_/     /_/  _____/____/\__,_/ /_/    /_/  \__,_/
       /_/                                                                                               )EOF");



    printf("\nBem-vindo a Splash Pizzaria, a melhor pizza do bairro!!");
    printf("\nAntes de começar, ja possui conta na nossa plataforma?"
           "\n\n1 - Sim"
           "\n2 - Não"
           "\n>");
    scanf("%i",&opcao);
    if(opcao==1)
    {
        FILE*loggon = fopen("carla.txt","r");

        if (loggon == NULL)
    {
        printf("\nErro ao abrir o arquivo!");
        return 1;
    }


    if(fscanf(loggon, "nome : %s senha: %",login.nomearq,login.senhaarq) !=2) {
        printf("\nError ao ler os dados");
        return 1;
    }

    printf("\nnome:");
    scanf("%s",&login.nome);

    printf("\nsenha:");
    scanf("%s",&login.senha);

    if(strcmp(login.nome,login.nomearq) ==0  && strcmp(login.senha,login.senhaarq) == 0)
    {
        printf("\nLogin feito com successo!");
    }
    else{
        printf("\nLogin mal-sucedido");
    }
    fclose(loggon);




    }






    return 0;
}


