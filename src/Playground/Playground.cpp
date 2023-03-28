//
// Created by Tomi-Tom on 3/29/23.
//

#include "Playground.hpp"

std::string Playground::run(sf::RenderWindow &window) {
    // run simulation
    if (!_pauseButton.isClicked()) {
        for (int i = 0; i < _nbBoids; i++) {
            _boids[i].simulate();
        }
    }
    display(window);
    if (_quitButton.isClicked())
        return "Menu";
    return "Playground";
}

void Playground::display(sf::RenderWindow &window) {
    window.draw(_background);

    for (int i = 0; i < _nbBoids; i++) {
        _boids[i].display(window);
    }

    window.draw(_ButtonContainer);
    _playButton.display(window);
    _quitButton.display(window);
    _plusButton.display(window);
    _minusButton.display(window);
    _pauseButton.display(window);

}