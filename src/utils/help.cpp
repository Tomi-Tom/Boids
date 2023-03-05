/*
** Project          : Boids
** File description : help
** Creator          : Tom Bariteau-Peter
** Created on       : 23/05/2022
*/

#include <iostream>
#include "define.hpp"

using namespace std;

int help(void)
{
    cout <<                                                     \
    "\n+--------------------------------------------------+\n"  \
    "|                                                  |\n"    \
    "|               THE BOIDS - PROJECT                |\n"    \
    "|                                                  |\n"    \
    "+--------------------------------------------------+\n\n"  \
    "USAGE :\n"                                                 \
    "   ./Boids [NUMBER]\n\n"                                   \
    "OPTIONS :\n"                                               \
    "   - NUMBER => The number of Boids you want to create\n"   \
    "                       {between 0 and 500}\n\n"            \
    << endl;
    return SUCCESS;
}