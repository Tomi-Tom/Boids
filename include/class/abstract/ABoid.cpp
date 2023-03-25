/*
** Project          : Boids
** File description : Boid Class Description
** Creator          : Tom Bariteau-Peter
** Created on       : 23/05/2022
*/

#include <cstdlib>
#include "ABoid.hpp"

void boids::ABoid::simulate() {
    std::rand() % 2 ? this->_angle += 1 : this->_angle -= 1;
    this->_angle = (this->_angle > 360 ? 0 : (this->_angle < 0 ? 360 : this->_angle));
    return;
}
