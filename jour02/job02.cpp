#include <iostream>

int main() {
    int n;
    std::cin >> n;

    switch(n) {
        case 0: 
            std::cout << "Nul\n";
            break;
        case 1:
        case 2:
            std::cout << "Petit\n";
            break;
        case 3:
        case 4:
        case 5:
            std::cout << "Moyen\n";
            break;
        default:
            std::cout << "Grand\n";
            break;
    }

    return 0;
}
 //résultats: 
//Pour n = 0 : "Nul" sera affiché.
//Pour n = 1 ou n = 2 : "Petit" sera affiché.
//Pour n = 3, n = 4 ou n = 5 : "Moyen" sera affiché.
//Pour n = 10 : "Grand" sera affiché.
//Pour n = -5 : "Grand" sera affiché car il n'y a pas de contrôle pour les valeurs négatives et elles tombent dans le cas par défaut.