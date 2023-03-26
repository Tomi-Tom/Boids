/*
** Project          : Boids
** File description : Boid Class Description
** Creator          : Tom Bariteau-Peter
** Created on       : 23/05/2022
*/

#include <cstdlib>
#include <cmath>
#include "ABoid.hpp"

void boids::ABoid::simulate() {
    std::rand() % 2 ? this->_angle += 1 : this->_angle -= 1;
    double new_x = this->_position.x + this->_speed * cos((this->_angle - 90) * 3.14 / 180.0);
    double new_y = this->_position.y + this->_speed * sin((this->_angle - 90) * 3.14 / 180.0);
    if (new_x < 10 || new_x > 1910) {
        this->_angle += 180;
        new_x = std::max(10.0, std::min(new_x, 1910.0));
    }

    if (new_y < 10 || new_y > 1020) {
        this->_angle += 180;
        new_y = std::max(10.0, std::min(new_y, 1020.0));
    }

    this->_position = {new_x, new_y};
    return;
}

