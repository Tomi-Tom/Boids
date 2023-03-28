//
// Created by Tomi-Tom on 3/28/23.
//

#ifndef BOIDS_BUTTON_HPP
#define BOIDS_BUTTON_HPP

#include <SFML/Graphics.hpp>

class Button {
public:
    Button() = default;
    Button(sf::Vector2f position, sf::Vector2f size, sf::Color color) :
        _state(false), _position(position), _size(size), _color(color) {
        _shape.setPosition(_position);
        _shape.setSize(_size);
        _shape.setFillColor(_color);
    };
    ~Button() {};

    bool getState();
    void display(sf::RenderWindow &window);

private:
    bool _state;
    sf::Vector2f _position;
    sf::Vector2f _size;
    sf::RectangleShape _shape;
    sf::Color _color;
};


#endif //BOIDS_BUTTON_HPP
