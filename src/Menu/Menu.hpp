//
// Created by Tomi-Tom on 3/28/23.
//

#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include "IDisplay.hpp"
#include "Button.hpp"

class Menu : public IDisplay {
public:
    Menu() {
        sf::Color color = sf::Color::White;

        // Setup les components UI
        _background = sf::RectangleShape(sf::Vector2f(1920, 1080));
        _background.setFillColor(sf::Color::Black);
        _ButtonContainer = sf::RectangleShape(sf::Vector2f(500, 1080));
        _ButtonContainer.setFillColor(sf::Color::Red);

        // Setup les boutons
        _playButton = Button(sf::Vector2f(100, 100), sf::Vector2f(250, 75), color);
        _settingsButton = Button(sf::Vector2f(100, 200), sf::Vector2f(250, 75), color);
        _quitButton = Button(sf::Vector2f(100, 300), sf::Vector2f(250, 75), color);

    };
    ~Menu() override {};

    void display(sf::RenderWindow &window) override;

private:
    // Boutons
    Button _playButton;
    Button _settingsButton;
    Button _quitButton;

    // Components UI
    sf::RectangleShape _background;
    sf::RectangleShape _ButtonContainer;

};
