#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure pour représenter une note
struct Note {
    string nom;
    string prenom;
    double valeur;
};

// Fonction pour ajouter une note à la liste
void ajouterNote(vector<Note>& listeNotes) {
    Note nouvelleNote;
    cout << "Entrez le nom de l'etudiant : ";
    cin >> nouvelleNote.nom;
    cout << "Entrez le prenom de l'etudiant : ";
    cin >> nouvelleNote.prenom;
    cout << "Entrez la valeur de la note : ";
    cin >> nouvelleNote.valeur;
    listeNotes.push_back(nouvelleNote);
    cout << "Note ajoutee avec succes." << endl;
}

// Fonction pour afficher la liste des notes
void afficherListeNotes(const vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        cout << "La liste des notes est vide." << endl;
    } else {
        cout << "Liste des notes :" << endl;
        for (const auto& note : listeNotes) {
            cout << "Nom : " << note.nom << ", Prenom : " << note.prenom << ", Note : " << note.valeur << endl;
        }
    }
}

// Fonction pour supprimer une note de la liste
void supprimerNote(vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        cout << "La liste des notes est vide." << endl;
    } else {
        string nom, prenom;
        cout << "Entrez le nom de l'etudiant dont vous voulez supprimer la note : ";
        cin >> nom;
        cout << "Entrez le prenom de l'etudiant : ";
        cin >> prenom;

        bool noteTrouvee = false;
        for (auto it = listeNotes.begin(); it != listeNotes.end(); ++it) {
            if (it->nom == nom && it->prenom == prenom) {
                it = listeNotes.erase(it);
                cout << "Note supprimee avec succes." << endl;
                noteTrouvee = true;
                break;
            }
        }

        if (!noteTrouvee) {
            cout << "Aucune note trouvee pour cet etudiant." << endl;
        }
    }
}

// Fonction pour calculer la moyenne des notes
void calculerMoyenne(const vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        cout << "La liste des notes est vide." << endl;
    } else {
        double somme = 0.0;
        for (const auto& note : listeNotes) {
            somme += note.valeur;
        }
        double moyenne = somme / listeNotes.size();
        cout << "La moyenne des notes est : " << moyenne << endl;
    }
}

int main() {
    vector<Note> listeNotes;
    int choix;

    do {
        cout << "\nMenu :" << endl;
        cout << "1. Ajouter une note" << endl;
        cout << "2. Afficher la liste de notes" << endl;
        cout << "3. Supprimer une note" << endl;
        cout << "4. Afficher la moyenne des notes" << endl;
        cout << "5. Quitter" << endl;
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {
            case 1:
                ajouterNote(listeNotes);
                break;
            case 2:
                afficherListeNotes(listeNotes);
                break;
            case 3:
                supprimerNote(listeNotes);
                break;
            case 4:
                calculerMoyenne(listeNotes);
                break;
            case 5:
                cout << "Fin du programme." << endl;
                break;
            default:
                cout << "Choix invalide. Veuillez reessayer." << endl;
        }
    } while (choix != 5);

    return 0;
}
