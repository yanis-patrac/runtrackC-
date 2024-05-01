#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool estPalindrome(const string& mot) {
    int debut = 0;
    int fin = mot.length() - 1;

    // Parcourir le mot de chaque extrémité vers le centre
    while (debut < fin) {
        if (mot[debut] != mot[fin]) {
            return false; // Si les caractères à ces positions ne correspondent pas, ce n'est pas un palindrome
        }
        debut++;
        fin--;
    }
    return true; // Si toutes les comparaisons ont réussi, le mot est un palindrome
}

int main() {
    vector<string> tab = {"radar", "hello", "lvel", "stats", "world"};

    cout << "Palindromes trouves dans le tableau : " << endl;
    for (const string& mot : tab) {
        if (estPalindrome(mot)) {
            cout << mot << endl;
        }
    }

    return 0;
}
