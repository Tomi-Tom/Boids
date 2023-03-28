//
// Created by Tomi-Tom on 3/28/23.
//

#include <iostream>
#include "Button.hpp"

void Button::display(sf::RenderWindow &window) {
    window.draw(_shape);
}