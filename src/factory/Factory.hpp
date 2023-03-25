//
// Created by Tomi-Tom on 3/25/23.
//

#ifndef FACTORY
#define FACTORY

#include <cstddef>
#include <memory>
#include <string>
#include <functional>
#include <unordered_map>
#include "IBoid.hpp"


namespace boids {

    class Factory {

    public:
        Factory();
        ~Factory() {};

        IBoid *createBoid(std::string type);

    private:
        std::unordered_map<std::string, std::function<IBoid *()>> dict;

    };
}

#endif /* FACTORY */

