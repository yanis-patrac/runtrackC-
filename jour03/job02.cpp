#include <iostream>
#include <string>
using namespace std;

int main() {
    string phrase = "vive la plateforme !";
    string nouvellePhrase = "";

    // Parcourir la chaîne d'origine et copier les caractères qui ne sont pas des voyelles dans la nouvelle chaîne
    for (char c : phrase) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            nouvellePhrase += c;
        }
    }

    cout << "La phrase sans voyelles est : " << nouvellePhrase << endl;

    return 0;
}
