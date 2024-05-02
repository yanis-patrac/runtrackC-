#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;

    // Affichage des valeurs initiales
    cout << "Avant l'echange :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Pointeurs pour les variables
    int *ptrA = &a;
    int *ptrB = &b;

    // Echange des valeurs en utilisant des pointeurs
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    // Affichage des valeurs après l'echange
    cout << "Apres l'echange :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
