#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout << "Veuillez entrer un nombre strictement positif : ";
        cin >> n;
    } while (n <= 0);
    
    cout << "Vous avez entré : " << n << endl;
    
    return 0;
}
