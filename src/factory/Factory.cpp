//
// Created by Tomi-Tom on 3/25/23.
//
#include "Factory.hpp"
#include "Boids.hpp"
#include <functional>
#include <string>

boids::Factory::Factory() {
    this->dict.insert({"basic", []() -> IBoid *{
        IBoid *boid = new ABoid("basic", 1, 10, 0);
        return boid;
    }});
}

boids::IBoid *boids::Factory::createBoid(std::string type) {
    return this->dict[type]();
}
