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
        int resultat = nombre_1 + nombre_2;
    }
    else if (operateur == '-')
    {
        printf("soustraction\n");
        int resultat = nombre_1 - nombre_2;
    }
    else if (operateur == '*')
    {
        printf("multiplication\n");
        int resultat = nombre_1 * nombre_2;
    }
    else if (operateur == '/')
    {
        if (nombre_2 == 0)
        {
            printf("Impossible de diviser par 0\n");
        }
        else
        {
            printf("division\n");
            float resultat = (float)nombre_1 / nombre_2;
        }
    }
    else if (operateur == '%')
    {
        if (nombre_2 == 0)
        {
            printf("Impossible de diviser par 0\n");
        }
        else
        {
            printf("modulo\n");
            int resultat = nombre_1 % nombre_2;
        }
    }
    else
    {
        printf("Opérateur non reconnu\n");
    }

    return 0;
}
