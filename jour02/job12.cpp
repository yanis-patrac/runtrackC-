#include <iostream>

double calculateHarmonicSeriesSum(int n) {
    double sum = 0.0; // Déclarer sum comme un double pour une meilleure précision
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i; // Utiliser 1.0 pour s'assurer que la division est faite avec des doubles
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Entrez la valeur de n : ";
    std::cin >> n;
    double sum = calculateHarmonicSeriesSum(n);
    std::cout << "La somme des " << n << " premiers termes de la série harmonique est : " << sum << std::endl;
    return 0;
}
