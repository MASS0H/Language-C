#include <stdio.h>
/*
===========================
les Operateurs :
===========================
une operateur est un symbole qui represente une action et qui prend des valeurs ou bien des variaables en entree et qui retourne une sortie

Exemple : dans "a + b", + est un operateur qui prend 2 valeurs ou plus en entree et qui retourne la somme de ces valeurs

=> Les operateurs classiques
1- Addition (+)
2- Soustraction (-)
3- Multiplication (*) , n'utilse jamais le (x);
4- Division (/);

=> Operateurs de programmation
1 - affectation (=)
2- incrementation (++)
3- decrementation (--)





*/


int main() {
    int a, b, c;
    printf("veuillez saisir la valeur de a : ");
    scanf("%d", &a);
    printf("veuillez saisir la valeur de b : ");
    scanf("%d", &b);

    // utilisation de l'operateur d'affectation : signifie "affecter la valeur de 'b' à 'a'
    // c'est la valeur a gauche qui change de valeur , et la valeur a droite ne se change pas
    a = b ;
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("==================");
    c = a + b;
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("==================");

    b = a;
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("==================");

    c = a * b;
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("==================");



  
}
