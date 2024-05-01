#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string chaine1, chaine2 = "Bonjour";

    // Demander à l'utilisateur d'entrer une chaîne de caractères
    cout << "Entrez une chaine de caracteres : ";
    getline(cin, chaine1);

    // Trier les deux chaînes dans l'ordre lexicographique
    sort(chaine1.begin(), chaine1.end());
    sort(chaine2.begin(), chaine2.end());

    // Afficher les deux chaînes triées
    cout << "Chaine 1 trie : " << chaine1 << endl;
    cout << "Chaine 2 trie : " << chaine2 << endl;

    return 0;
}
