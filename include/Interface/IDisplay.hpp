//
// Created by Tomi-Tom on 3/28/23.
//

#ifndef BOIDS_IDISPLAY_HPP
#define BOIDS_IDISPLAY_HPP

#include <SFML/Graphics.hpp>

class IDisplay {
public:
    virtual ~IDisplay() = default;

    virtual std::string run(sf::RenderWindow &window) = 0;
    virtual void display(sf::RenderWindow &window) = 0;
};

#endif //BOIDS_IDISPLAY_HPP
