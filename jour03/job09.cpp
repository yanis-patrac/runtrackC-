#include <iostream>
#include <string>
using namespace std;

bool estIncluse(const string& chaine1, const string& chaine2) {
    size_t found = chaine2.find(chaine1);
    return (found != string::npos); // Si found est différent de string::npos, la chaîne1 est incluse dans la chaîne2
}

int main() {
    string chaine1, chaine2;

    cout << "Entrez la premiere chaine de caracteres : ";
    getline(cin, chaine1);

    cout << "Entrez la deuxieme chaine de caracteres : ";
    getline(cin, chaine2);

    if (estIncluse(chaine1, chaine2)) {
        cout << "La premiere chaine est incluse dans la deuxieme." << endl;
    } else {
        cout << "La premiere chaine n'est pas incluse dans la deuxieme." << endl;
    }

    return 0;
}
