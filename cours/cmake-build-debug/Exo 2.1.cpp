#include <iostream>
using namespace std;
int Exo2c1(int argc, char **argv) {

    int value;
    cout << "Entre une valeur et je te dirais si elle est compris entre 10 et 20" << endl; cin >> value;
    if (10 < value < 20)
        cout << "Ta valeur est bien entre 10 et 20"
        or
        cout << "ta valeur n'est pas comprise entre 10 et 20 (exclu)" << endl;
}


