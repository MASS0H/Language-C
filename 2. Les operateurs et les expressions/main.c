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
    // sortie : a = 0 , b = 0, c = 0
    printf("veuillez saisir la valeur de a : ");
    scanf("%d", &a);
    // sortie : a = 9 , b = 0, c = 0
    printf("veuillez saisir la valeur de b : ");
    scanf("%d", &b);
    // sortie : a = 9 , b = 5, c = 0

    // utilisation de l'operateur d'affectation : signifie "affecter la valeur de 'b' à 'a'
    // c'est la valeur a gauche qui se change , et la valeur a droite ne se change pas

    a = b ;
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("================== \n");
    // sortie : a = 5 , b = 5, c = 0
    c = a + b;
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("==================\n");
    // sortie : a = 5 , b = 5, c = 10
    a = 9;
    b = 5;
    b = a; // cad b va prendre la valeur de a
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("================== \n");
    // sortie : a = 9 , b = 9, c = 10

    c = a * b;
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("==================\n");
    // sortie : a = 9 , b = 9 , c = 81



  
}
