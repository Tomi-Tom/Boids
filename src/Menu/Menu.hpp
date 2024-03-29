//
// Created by Tomi-Tom on 3/28/23.
//

#ifndef BOIDS_MENU_HPP
#define BOIDS_MENU_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include "IDisplay.hpp"
#include "Button.hpp"

class Menu : public IDisplay {
public:
    Menu() {
        sf::Color color = sf::Color(235, 158, 50);

        // Setup les components UI
        _background = sf::RectangleShape(sf::Vector2f(1920, 1080));
        _background.setFillColor(sf::Color(48, 43, 52));
        _buttonContainer = sf::RectangleShape(sf::Vector2f(500, 1080));
        _buttonContainer.setFillColor(sf::Color(63, 57, 68));

        // Setup les boutons
        _playButton = Button("Play", sf::Vector2f(100, 100), sf::Vector2f(250, 75), color);
        _quitButton = Button("Quit", sf::Vector2f(100, 800), sf::Vector2f(250, 75), color);

    };
    ~Menu() override {
        _playButton.~Button();
        _quitButton.~Button();
        _background.~RectangleShape();
        _buttonContainer.~RectangleShape();
    };

    std::string run(sf::RenderWindow &window) override;
    void display(sf::RenderWindow &window) override;

private:
    // Boutons
    Button _playButton;
    Button _quitButton;

    // Components UI
    sf::RectangleShape _background;
    sf::RectangleShape _buttonContainer;

};

#endif //BOIDS_MENU_HPP