#include <stdio.h>
#include <stdlib.h>  




int main() {
    double num1;
    double num2;
    char operateur;

    printf("Entrez votre premier nombre : ");
    scanf_s("%lf", &num1);
    printf("Entrez votre operateur ( + | - | * | /) : ");
    scanf_s(" %c", &operateur, 1);
    printf("Entrez votre deuxième nombre : ");
    scanf_s("%lf", &num2);

    if (operateur == '+')
    {
        printf("Votre resultat est %f", num1 + num2);
    }
    else if (operateur == '-') {
        printf("Votre resultat est %f", num1 - num2);
    }
    else if (operateur == '*') {
        printf("Votre resultat est %f", num1 * num2);
    }
    else if (operateur == '/') {
        printf("Votre resultat est %f", num1 / num2);
    }
    else {
        printf("Erreur De Syntaxe");
    }
         
     
    return 0;

}
