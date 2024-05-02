#include <iostream>
using namespace std;

int main() {
    // Initialisation du tableau d'entiers avec des valeurs de mon choix
    int tableau[] = {10, 20, 30, 40, 50};

    // Affichage de l'adresse de chaque élément du tableau et leur valeur
    cout << "Adresse et valeur de chaque element du tableau :" << endl;
    for (int i = 0; i < sizeof(tableau) / sizeof(tableau[0]); ++i) {
        cout << "Adresse : " << &tableau[i] << ", valeur : " << tableau[i] << endl;
    }

    return 0;
}
