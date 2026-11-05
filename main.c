#include <stdlib.h>
#include <stdio.h>

int main()
{   
    char operateur;
    int nombre_1;
    int nombre_2;

    printf("Bienvenue dans la mini calculatrice !\n");

    printf("Choisissez un opérateur (+, -, *, /, %%) :\n");
    scanf(" %c", &operateur);

    printf("Choisissez un premier nombre :\n");
    scanf("%d", &nombre_1);

    printf("Choisissez un second nombre :\n");
    scanf("%d", &nombre_2);

    if (operateur == '+')
    {
        printf("addition\n");
    }
    else if (operateur == '-')
    {
        printf("soustraction\n");
    }
    else if (operateur == '*')
    {
        printf("multiplication\n");
    }
    else if (operateur == '/')
    {
        printf("division\n");
    }
    else if (operateur == '%')
    {
        printf("modulo\n");
    }
    else
    {
        printf("Opérateur non reconnu\n");
    }
    return 0;
}
