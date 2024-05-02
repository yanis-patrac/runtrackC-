#include <iostream>
using namespace std;

int main() {
    // Création d'un tableau de pointeurs vers des éléments de différents types
    void* tableau[] = {(void*)2019, (void*)"La Plateforme", (void*)3.14, (void*)"Étudiants"};

    // Affichage de l'adresse et de la valeur de chaque élément du tableau
    cout << "Adresse et valeur de chaque element du tableau :" << endl;
    for (int i = 0; i < sizeof(tableau) / sizeof(tableau[0]); ++i) {
        cout << "Adresse : " << &tableau[i] << ", valeur : ";
        if (i == 0) {
            cout << *((int*)tableau[i]); // Convertir le pointeur en pointeur d'entier pour afficher la valeur
        } else if (i == 1 || i == 3) {
            cout << (char*)tableau[i]; // Convertir le pointeur en pointeur de caractère pour afficher la valeur
        } else {
            cout << *((double*)tableau[i]); // Convertir le pointeur en pointeur de double pour afficher la valeur
        }
        cout << endl;
    }

    return 0;
}
