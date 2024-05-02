#include <iostream>
using namespace std;

int main() {
    // Déclaration de trois variables entières
    int a = 5;
    int b = 10;
    int c = 15;

    // Déclaration de trois pointeurs pointant vers les variables
    int *ptrA = &a;
    int *ptrB = &b;
    int *ptrC = &c;

    // Affichage des valeurs initiales des variables
    cout << "Valeurs initiales des variables :" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    // Modification des valeurs pointées par les pointeurs
    *ptrA = 20;
    *ptrB = 25;
    *ptrC = 30;

    // Affichage des nouvelles valeurs des variables
    cout << "Nouvelles valeurs des variables :" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}
