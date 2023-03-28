//
// Created by Tomi-Tom on 3/29/23.
//

#include "Playground.hpp"

std::string Playground::run(sf::RenderWindow &window) {
    display(window);
    if (_quitButton.isClicked())
        return "Menu";
    return "Playground";
}

void Playground::display(sf::RenderWindow &window) {
    // Setup text with number of boids
    sf::Text text;
    sf::Font font;
    font.loadFromFile("assets/fonts/arial.ttf");
    text.setString(std::to_string(_nbBoids));
    text.setCharacterSize(32);
    text.setFillColor(sf::Color::White);
    text.setPosition(10, 10);

    // Draw
    window.draw(_background);
    window.draw(_ButtonContainer);
    _playButton.display(window);
    _quitButton.display(window);
    _plusButton.display(window);
    _minusButton.display(window);
    _pauseButton.display(window);
    window.draw(text);
}