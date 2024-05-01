#include <iostream>
using namespace std;

void generateFibonacci(int limit) {
    int a = 0, b = 1, c;
    cout << "Suite de Fibonacci jusqu'à la limite " << limit << ":" << endl;
    cout << a << " " << b << " "; // Afficher les deux premiers termes de la suite

    c = a + b; // Calculer le prochain terme de la suite
    while (c <= limit) {
        cout << c << " "; // Afficher le terme
        a = b; // Mettre à jour les deux derniers termes
        b = c;
        c = a + b; // Calculer le prochain terme
    }
}

int main() {
    int limite;

    cout << "Entrez la limite pour la suite de Fibonacci : ";
    cin >> limite;

    generateFibonacci(limite);

    return 0;
}
