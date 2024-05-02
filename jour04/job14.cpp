#include <iostream>
using namespace std;

int main() {
    int x = 12;
    int& ref_x = x; // Déclaration d'une référence à x

    cout << "Avant modification : x = " << x << endl;
    ref_x = 42; // Modification de la valeur de x via la référence ref_x
    cout << "Après modification : x = " << x << endl;

    return 0;
}
