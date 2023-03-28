//
// Created by Tomi-Tom on 3/28/23.
//

#ifndef BOIDS_BUTTON_HPP
#define BOIDS_BUTTON_HPP

#include <SFML/Graphics.hpp>

enum class STATE {
    IDLE,
    HOVER,
    CLICKED
};

class Button {
public:
    Button() = default;
    Button(std::string text, sf::Vector2f position, sf::Vector2f size, sf::Color color) :
        _state(STATE::IDLE), _text(text), _position(position), _size(size), _color(color) {
        // Setup Shape
        _shape.setPosition(_position);
        _shape.setSize(_size);
        _shape.setFillColor(_color);

        // Setup Font
        _font.loadFromFile("assets/fonts/arial.ttf");
    };
    ~Button() {};

    bool isClicked();
    void display(sf::RenderWindow &window);

private:
    STATE _state;
    sf::Vector2f _position;
    sf::Vector2f _size;
    sf::RectangleShape _shape;
    sf::Color _color;
    sf::Font _font;
    std::string _text;

    void handleState(sf::RenderWindow &window);
};


#endif //BOIDS_BUTTON_HPP
