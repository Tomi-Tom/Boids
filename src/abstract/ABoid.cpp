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

    return;
}
