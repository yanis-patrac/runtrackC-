#include <iostream>
#include <string>
#include <cctype> // Pour la fonction toupper
using namespace std;

int main() {
    string phrase = "vive la plateforme !";
    
    // Parcourir la chaîne et convertir chaque caractère en majuscule
    for (char &c : phrase) {
        c = toupper(c);
    }

    cout << phrase << endl;

    return 0;
}
