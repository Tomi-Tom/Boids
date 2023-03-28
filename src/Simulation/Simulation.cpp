//
// Created by Tomi-Tom on 3/27/23.
//

#include "Simulation.hpp"

void Simulation::pollEvents() {
    while (_window.pollEvent(_event)) {
        if (_event.type == sf::Event::Closed)
            _window.close();
    }
}

void Simulation::run() {
    while (_window.isOpen()) {
        pollEvents();
        _window.clear();
        _displays[_currentDisplay]->display(_window);
        _window.display();
    }
}