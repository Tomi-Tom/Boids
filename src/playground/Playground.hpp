//
// Created by Tomi-Tom on 3/25/23.
//

#ifndef BOIDS_PLAYGROUND_HPP
#define BOIDS_PLAYGROUND_HPP

#include <SFML/Graphics.hpp>
#include "ABoid.hpp"

namespace boids {

    class Playground {
        public:
            Playground(sf::RenderWindow *window) : _window(window) {};
            ~Playground() {};

            void simulate();

        private:
            sf::RenderWindow *_window;
            IBoid *_boids;
    };

}


#endif //BOIDS_PLAYGROUND_HPP
