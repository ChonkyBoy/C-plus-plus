//
// Created by Marin on 26/01/2022.
//
#include <iostream>

int exo1c2(int argc, char **utf8)
{
    int lenght;
    int width;
    int surface;
    std::cout << "Exercice 1.2" << std::endl;
    std::cout << "Entre une longueur !" << std::endl; std::cin >> lenght;
    std::cout << "Entre une largeur !" << std::endl; std::cin >> width;
    surface = lenght * width;
    std::cout << "La surface que tu as saisi éé fait " << surface << " cm2!" << std::endl;
    return 0;

}


