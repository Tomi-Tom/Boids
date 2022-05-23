/*
** Project          : Boids
** File description : main
** Creator          : Tom Bariteau-Peter
** Created on       : 23/05/2022
*/



#include <iostream>
#include <string>
#include <cstring>
#include "utils.hpp"
#include "define.hpp"

using namespace std;

int main(int argc, char **argv, char **env)
{
    if (error_handling(argc, argv, env) == FAILURE)
        return ERROR;
    if (strcmp(argv[1], "-help") == SUCCESS)
        return help();
    return SUCCESS;
}
