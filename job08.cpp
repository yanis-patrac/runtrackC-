#include <iostream>

int main() {
    // Déclaration de la variable pour stocker l'année saisie
    int annee;

    // Demander à l'utilisateur de saisir une année
    std::cout << "Entrez une annee : ";
    std::cin >> annee;

    // Vérifier si l'année est bissextile
    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
        std::cout << annee << " est une annee bissextile." << std::endl;
    } else {
        std::cout << annee << " n'est pas une annee bissextile." << std::endl;
    }

    return 0;
}


//Ce programme demande à l'utilisateur de saisir une année, 
//puis il vérifie si cette année est bissextile en appliquant les règles suivantes :
//-Si l'année est divisible par 4 mais n'est pas divisible par 100, ou si elle est divisible par 400,
//alors elle est bissextile.
//-Sinon, elle n'est pas bissextile.
//-Le programme affiche ensuite le résultat correspondant.