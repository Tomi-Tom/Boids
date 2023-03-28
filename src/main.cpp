/*
** Project          : Boids
** File description : main
** Creator          : Tom Bariteau-Peter
** Created on       : 23/05/2022
*/

#include <iostream>
#include "Simulation.hpp"

int main(int argc, char const **argv, char const **env)
{
    srand(time(NULL));
    Simulation simulation;
    simulation.run();
    return 0;
}
