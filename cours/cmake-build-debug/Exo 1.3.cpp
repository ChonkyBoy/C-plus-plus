//
// Created by Marin on 26/01/2022.
//

#include <iostream>
using namespace std;

int exo1c3(int argc, char **utf8)
{
    int a;
    int b;
    int c;
    cout << "Entre une valeur quelconque!" << endl; cin >> a;
    cout << "Entre une autre valeur quelconque!" << endl; cin >> b;
    c = a;
    a = b;
    b = c;
    cout << a << " " << b << endl;
    return  0;
}

