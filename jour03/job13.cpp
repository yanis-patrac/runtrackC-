#include <iostream>
using namespace std;

void fusionnerTableaux(const int tableau1[], int taille1, const int tableau2[], int taille2, int tableauFusionne[]) {
    int index1 = 0, index2 = 0, indexFusionne = 0;

    // Fusionner les tableaux en conservant l'ordre croissant
    while (index1 < taille1 && index2 < taille2) {
        if (tableau1[index1] < tableau2[index2]) {
            tableauFusionne[indexFusionne++] = tableau1[index1++];
        } else {
            tableauFusionne[indexFusionne++] = tableau2[index2++];
        }
    }

    // Ajouter les éléments restants du premier tableau
    while (index1 < taille1) {
        tableauFusionne[indexFusionne++] = tableau1[index1++];
    }

    // Ajouter les éléments restants du deuxième tableau
    while (index2 < taille2) {
        tableauFusionne[indexFusionne++] = tableau2[index2++];
    }
}

int main() {
    const int taille1 = 5, taille2 = 4;
    int tableau1[taille1] = {1, 3, 5, 7, 9};
    int tableau2[taille2] = {2, 4, 6, 8};
    int tableauFusionne[taille1 + taille2];

    fusionnerTableaux(tableau1, taille1, tableau2, taille2, tableauFusionne);

    cout << "Tableau fusionne : ";
    for (int i = 0; i < taille1 + taille2; ++i) {
        cout << tableauFusionne[i] << " ";
    }
    cout << endl;

    return 0;
}
