#include <iostream>
#include <cstring> // Pour utiliser la fonction strcmp
using namespace std;

int compareChaines(const char* chaine1, const char* chaine2) {
    // Utiliser la fonction strcmp pour comparer les chaînes
    if (strcmp(chaine1, chaine2) == 0) {
        return 0; // Les chaînes sont égales
    } else {
        return 1; // Les chaînes sont différentes
    }
}

int main() {
    const char* chaine1 = "Bonjour";
    const char* chaine2 = "Bonjour";
    int resultat = compareChaines(chaine1, chaine2);

    if (resultat == 0) {
        cout << "Les chaînes sont égales." << endl;
    } else {
        cout << "Les chaînes sont différentes." << endl;
    }

    return 0;
}
