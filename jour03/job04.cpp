#include <iostream>
#include <cstring> // Pour utiliser la fonction strlen
using namespace std;

int main() {
    const char* phrase = "Vive la plateforme !";
    int taille = strlen(phrase); // Utilisation de la fonction strlen pour calculer la longueur de la chaîne

    cout << "La taille est " << taille << endl;

    return 0;
}
