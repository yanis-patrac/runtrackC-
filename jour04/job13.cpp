#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure pour représenter une destination avec son temps de vol
struct Vol {
    string destination;
    int tempsDeVol;
};

int main() {
    vector<Vol*> vols; // Conteneur vector de pointeurs vers des structures Vol

    int choix;
    do {
        cout << "\nMenu :" << endl;
        cout << "1. Ajouter une destination et son temps de vol" << endl;
        cout << "2. Afficher les destinations et leurs temps de vol" << endl;
        cout << "3. Modifier les informations d'une destination" << endl;
        cout << "4. Quitter" << endl;
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {
            case 1: {
                Vol* nouveauVol = new Vol(); // Création d'une nouvelle structure Vol
                cout << "Entrez la destination : ";
                cin >> nouveauVol->destination;
                cout << "Entrez le temps de vol depuis Marseille : ";
                cin >> nouveauVol->tempsDeVol;
                vols.push_back(nouveauVol); // Ajout du pointeur à la fin du vector
                cout << "Destination ajoutee avec succes." << endl;
                break;
            }
            case 2: {
                if (vols.empty()) {
                    cout << "Aucune destination n'a ete saisie." << endl;
                } else {
                    cout << "Destinations et temps de vol depuis Marseille :" << endl;
                    for (const auto& vol : vols) {
                        cout << "Destination : " << vol->destination << ", Temps de vol : " << vol->tempsDeVol << " heures" << endl;
                    }
                }
                break;
            }
            case 3: {
                if (vols.empty()) {
                    cout << "Aucune destination n'a ete saisie." << endl;
                } else {
                    int indice;
                    cout << "Entrez l'indice de la destination que vous voulez modifier (de 1 a " << vols.size() << ") : ";
                    cin >> indice;
                    if (indice >= 1 && indice <= vols.size()) {
                        cout << "Entrez la nouvelle destination : ";
                        cin >> vols[indice - 1]->destination;
                        cout << "Entrez le nouveau temps de vol depuis Marseille : ";
                        cin >> vols[indice - 1]->tempsDeVol;
                        cout << "Destination modifiee avec succes." << endl;
                    } else {
                        cout << "Indice invalide. Veuillez reessayer." << endl;
                    }
                }
                break;
            }
            case 4:
                cout << "Fin du programme." << endl;
                break;
            default:
                cout << "Choix invalide. Veuillez reessayer." << endl;
        }
    } while (choix != 4);

    // Libération de la mémoire allouée pour chaque structure dynamique
    for (auto vol : vols) {
        delete vol;
    }

    return 0;
}
