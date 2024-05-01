#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Entrez un entier positif : ";
    cin >> n;

    if (n <= 0) {
        cout << "L'entier doit être positif." << endl;
        return 1;
    }

    cout << "Les multiples de 3 ou 5 jusqu'à " << n << " sont :" << endl;

    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " est un multiple de 3 et de 5" << endl;
        } else if (i % 3 == 0) {
            cout << i << " est un multiple de 3" << endl;
        } else if (i % 5 == 0) {
            cout << i << " est un multiple de 5" << endl;
        }
    }

    return 0;
}


//Ce programme demande à l'utilisateur d'entrer un entier positif n.
// Ensuite, il itère à travers les nombres de 1 à n et vérifie pour chaque nombre s'il est un multiple de 3,
// de 5 ou des deux. Les résultats sont affichés à l'écran. 
//Par exemple, si n est 15, le programme affichera tous les nombres de 1 à 15 qui sont des multiples de 3 et/ou de 5.