#include <stdio.h>

int main() {
    int a, b;

    // Demander à l'utilisateur de saisir deux entiers
    printf("Entrez deux entiers : ");
    scanf("%d %d", &a, &b);

    // Afficher la somme
    printf("La somme est : %d\n", a + b);
    return 0;
}
