/*
** Project          : Boids
** File description : main
** Creator          : Tom Bariteau-Peter
** Created on       : 23/05/2022
*/

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <SFML/Graphics.hpp>
#include "playground/Playground.hpp"

int main(int argc, char const **argv, char const **env)
{
    srand((unsigned int)time(0));
    sf::RenderWindow window(sf::VideoMode(1920, 1020), "SFML window");
    boids::Playground playground(&window, argv[1] ? stoi((std::string)argv[1]) : 50);

    std::cout << "Hello World !" << std::endl;
    playground.simulate();
    return 0;
}
