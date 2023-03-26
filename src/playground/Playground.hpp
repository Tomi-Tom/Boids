//
// Created by Tomi-Tom on 3/25/23.
//

#ifndef BOIDS_PLAYGROUND_HPP
#define BOIDS_PLAYGROUND_HPP

#include <SFML/Graphics.hpp>
#include <vector>
#include <unordered_map>
#include "Boids.hpp"

namespace boids {

    class Playground {
        public:
            Playground(sf::RenderWindow *window, int nbBoids);
            ~Playground() {};

            void simulate();

        private:
            sf::RenderWindow *_window;
            sf::Event _event;
            std::vector<IBoid *> _boids;

            sf::Sprite _skin;

            void pollEvent();
            void simulateBoids();
            void displayBoids();
    };

}


#endif //BOIDS_PLAYGROUND_HPP
