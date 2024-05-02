#include <iostream>
using namespace std;

// Déclaration de la structure Point
struct Point {
    int x;
    int y;
};

int main() {
    // Déclaration d'une variable de type Point
    Point p;

    // Initialisation des membres de la structure via l'opérateur de sélection .
    p.x = 5;
    p.y = 10;

    // Affichage des valeurs initiales
    cout << "Valeurs initiales de x et y : " << p.x << ", " << p.y << endl;

    // Déclaration d'un pointeur vers la structure Point
    Point* ptrPoint = &p;

    // Accès aux membres de la structure via le pointeur et modification des valeurs de x et y
    ptrPoint->x = 20;
    ptrPoint->y = 30;

    // Affichage des nouvelles valeurs de x et y
    cout << "Nouvelles valeurs de x et y : " << p.x << ", " << p.y << endl;

    return 0;
}
