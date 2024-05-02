#include <iostream>
using namespace std;

int main() {
    int tableau[] = {1, 2, 3, 4, 5};

    // Utilisation d'une référence pour parcourir le tableau et afficher ses éléments
    cout << "Les elements du tableau sont : ";
    for (int& elem : tableau) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
