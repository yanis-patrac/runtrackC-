#include <iostream>

int main() {
    int N;
    
    // Demander à l'utilisateur de saisir la valeur de N
    std::cout << "Entrez le nombre de fois que vous souhaitez afficher 'Hello World': ";
    std::cin >> N;
    
    // Vérifier si N est supérieur à 0
    while (N > 0) {
        // Afficher "Hello World"
        std::cout << "Hello World" << std::endl;
        // Décrémenter N
        N--;
    }
    
    return 0;
}

//Ce programme demande à l'utilisateur de saisir la valeur de N,
// puis il utilise une boucle while pour afficher "Hello World" 
//N fois en décrémentant N à chaque itération, jusqu'à ce que N soit égal à 0.