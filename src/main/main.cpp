/*
** Project          : Boids
** File description : main
** Creator          : Tom Bariteau-Peter
** Created on       : 23/05/2022
*/

#include <string>
#include <vector>
#include "iostream"
#include "utils.hpp"
#include "Boids.hpp"
#include "Json.hpp"
#include "define.hpp"

int main(int argc, char const **argv, char const **env)
{
    srand(time(NULL));
    boids::boid test(1, 2, 3);
    std::vector<boids::boid> boid_list = test.createBoids(10);

    if (error_handling(argc, argv, env) == FAILURE)
        return ERROR;
    if (static_cast<std::string>(argv[1]) == "-help")
        return help();
    for (int i = 0; i < 10; i++) {
        std::cout << "La speed du test : " << boid_list[i].getSpeed() << std::endl;
        std::cout << "La range du test : " << boid_list[i].getRange() << std::endl;
        std::cout << "La angle du test : " << boid_list[i].getAngle() << std::endl << std::endl;
    }
    return SUCCESS;
}
