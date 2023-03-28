//
// Created by Tomi-Tom on 3/29/23.
//

#ifndef BOIDS_BOID_HPP
#define BOIDS_BOID_HPP

#include <SFML/Graphics.hpp>

class Boid {
public:
    Boid() {
        _texture.loadFromFile("assets/skins/basic_boid.png");
        _sprite.setTexture(_texture);
        _sprite.setOrigin(sf::Vector2f(_texture.getSize().x / 2, _texture.getSize().y / 2));
        _position = sf::Vector2f(rand() % 1920, rand() % 910);
        _size = 0.02;
        _speed = 0.3;
        _angle = rand() % 360;
    }
    ~Boid() {};

    void display(sf::RenderWindow &window);
    void simulate();

private:
    sf::Texture _texture;
    sf::Sprite _sprite;
    sf::Vector2f _position;
    double _size;
    double _speed;
    double _angle;

};


#endif //BOIDS_BOID_HPP
