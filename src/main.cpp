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

int main(int argc, char const **argv, char const **env)
{
    sf::RenderWindow window(sf::VideoMode(1920, 1020), "SFML window");
    sf::Texture texture;
    texture.loadFromFile("assets/basic_boid.png");
    sf::Sprite sprite(texture);
    sf::Event event;

    std::cout << "Hello World !" << std::endl;
    while (window.isOpen()) {
        while (window.pollEvent(event))
            if (event.type == sf::Event::Closed)
                window.close();
        window.clear();
        window.draw(sprite);
        window.display();
    }
    return 0;
}
