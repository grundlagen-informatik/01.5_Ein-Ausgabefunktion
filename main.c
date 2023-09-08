#include <stdio.h>

int main() {
    int zahl1;
    int zahl2;
    int resultat;

    // Hier muss der Code für den Additions-Rechner geschrieben werden
    printf("Please enter the first number: ");
    scanf_s("%d", &zahl1);
    printf("Please enter the second number: ");
    scanf_s("%d", &zahl2);
    resultat = zahl1 + zahl2;
    printf("The result is = %d", resultat);

    return 0;
}
