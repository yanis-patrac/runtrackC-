//Utilisation de la boucle while :

#include <iostream>
using namespace std;

int main() {
    int i = 0, n, som = 0;
    
    while (i < 4) {
        cout << "Entrez un entier : ";
        cin >> n;
        som += n;
        cout << "Somme : " << som << endl;
        i++;
    }
    
    return 0;
}


//Utilisation de la boucle do...while :

#include <iostream>
using namespace std;

int main() {
    int i = 0, n, som = 0;
    
    do {
        cout << "Entrez un entier : ";
        cin >> n;
        som += n;
        cout << "Somme : " << som << endl;
        i++;
    } while (i < 4);
    
    return 0;
}

//Ces deux versions effectuent la même opération :
// elles demandent à l'utilisateur d'entrer un entier quatre fois, puis affichent la somme accumulée à chaque étape.