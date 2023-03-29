//
// Created by Tomi-Tom on 3/29/23.
//

#include "Playground.hpp"

void Playground::handlePause() {
    if (_playButton.isClicked())
        _pause = false;
    if (_pauseButton.isClicked())
        _pause = true;
}

std::string Playground::run(sf::RenderWindow &window) {
    // run simulation
    handlePause();
    if (!_pause) {
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
        _skinSprite.setPosition(_boids[i].getPosition());
        _skinSprite.setRotation(_boids[i].getAngle() + 90);
        _skinSprite.setScale(sf::Vector2f(_boids[i].getSize(), _boids[i].getSize()));
        window.draw(_skinSprite);
    }

    window.draw(_ButtonContainer);
    _playButton.display(window);
    _quitButton.display(window);
    _plusButton.display(window);
    _minusButton.display(window);
    _pauseButton.display(window);

}