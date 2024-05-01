#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool verifierFormatHeure(const string& heure) {
    // Expression régulière pour vérifier le format de l'heure
    regex formatHeure("^\\d{2}h\\d{2}$");
    
    // Vérifier si l'heure correspond au format spécifié
    return regex_match(heure, formatHeure);
}

int main() {
    string saisie;
    cout << "Entrez une heure au format XXhXX : ";
    getline(cin, saisie);

    if (verifierFormatHeure(saisie)) {
        cout << "Format d'heure correct." << endl;
    } else {
        cout << "Format d'heure incorrect." << endl;
    }

    return 0;
}
