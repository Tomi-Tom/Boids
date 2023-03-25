//
// Created by Tomi-Tom on 3/25/23.
//

#include "Playground.hpp"

void boids::Playground::pollEvent() {
    while(this->_window->pollEvent(this->_event)) {
        if (this->_event.type == sf::Event::Closed)
            this->_window->close();
    }
}

void boids::Playground::simulate() {
    while (this->_window->isOpen()) {
        pollEvent();
        this->_window->clear();
        this->_window->display();
    }
}