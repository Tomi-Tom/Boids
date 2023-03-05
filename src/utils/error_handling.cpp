/*
** Project          : Boids
** File description : error handling
** Creator          : Tom Bariteau-Peter
** Created on       : 23/05/2022
*/
#include <iostream>
#include <regex>
#include <cstring>
#include "define.hpp"

using namespace std;

static bool is_integer(const string str){
    return regex_match(str, regex("[0-9]+"));
}

int error_handling(int argc, char const **argv, char const **env)
{
    if (env == NULL)
        return FAILURE;
    if (argc != 2)
        return FAILURE;
    if (strcmp(argv[1], "-help") == SUCCESS)
        return SUCCESS;
    if (!is_integer(argv[1]))
        return FAILURE;
    if (0 >= stoi(argv[1]) or stoi(argv[1]) > 500)
        return FAILURE;
    return SUCCESS;
}