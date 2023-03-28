//
// Created by Tomi-Tom on 3/29/23.
//

#include <math.h>
#include "Boid.hpp"

void Boid::display(sf::RenderWindow &window) {
    _sprite.setPosition(_position);
    _sprite.setRotation(_angle + 90);
    _sprite.setScale(sf::Vector2f(_size, _size));
    window.draw(_sprite);
}

void Boid::simulate() {
    int direction = rand() % 2;
    if (direction == 0)
        _angleChange += 0.05;
    else
        _angleChange -= 0.05;
    if (_angleChange > _angleChangeMax)
        _angleChange -= 0.05;
    if (_angleChange < -_angleChangeMax)
        _angleChange += 0.05;
    _angle += _angleChange;

    _position.x += _speed * cos(_angle * M_PI / 180);
    _position.y += _speed * sin(_angle * M_PI / 180);
    if (_position.x > 1920)
        _position.x = 0;
    if (_position.x < 0)
        _position.x = 1920;
    if (_position.y > 920)
        _position.y = 0;
    if (_position.y < 0)
        _position.y = 920;
}