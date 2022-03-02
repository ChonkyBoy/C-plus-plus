#include <iostream>
using namespace std;
int Exo1c4(int argc, char **argv)
{
    int sum;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    cout << "Entre 5 valeurs à la suite" << endl; cin >> v1;
    cout << "Encore" << endl; cin >> v2;
    cout << "à nouveau" << endl; cin >> v3;
    cout << "ça fait eaucoup là non ?" << endl; cin >> v4;
    cout << "la dernière" << endl; cin >> v5;
    sum = (v1 + v2 + v3 + v4 + v5)/5;
    cout << "La moyenne de tes valeurs est de " << sum << endl;
}

