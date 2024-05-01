#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Entrez la valeur de a : ";
    cin >> a;

    cout << "Entrez la valeur de b : ";
    cin >> b;

    if (a > b) {
        cout << "La valeur de a doit être inférieure ou égale à la valeur de b." << endl;
        return 1;
    }

    cout << "Les entiers de " << a << " à " << b << " sont :" << endl;

    int i = a;
    while (i <= b) {
        cout << i << " ";
        i++;
    }

    cout << endl;

    return 0;
}


//Ce programme demande à l'utilisateur d'entrer deux entiers, a et b.
// Ensuite, il vérifie si a est inférieur ou égal à b. S'ils sont correctement entrés,
// il affiche tous les entiers de a à b (bornes incluses) en utilisant une boucle "while".