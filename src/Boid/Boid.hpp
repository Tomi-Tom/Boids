//
// Created by Tomi-Tom on 3/29/23.
//

#ifndef BOIDS_BOID_HPP
#define BOIDS_BOID_HPP

#include <SFML/Graphics.hpp>

class Boid {
public:
    Boid() {
        _position = sf::Vector2f(rand() % 1920, rand() % 910);
        _size = 0.02;
        _speed = 0.3;
        _angle = rand() % 360;
        _angleChange = 0;
        _angleChangeMax = 0.3;
    }
    ~Boid() {};

    void simulate();

    sf::Vector2f getPosition() { return _position; }
    double getSize() { return _size; }
    double getAngle() { return _angle; }

private:
    sf::Vector2f _position;
    double _size;
    double _speed;
    double _angle;
    double _angleChange;
    double _angleChangeMax;

};


#endif //BOIDS_BOID_HPP
