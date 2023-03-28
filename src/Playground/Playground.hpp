//
// Created by Tomi-Tom on 3/29/23.
//

#ifndef BOIDS_PLAYGROUND_HPP
#define BOIDS_PLAYGROUND_HPP

#include <SFML/Graphics.hpp>
#include "IDisplay.hpp"
#include "Button.hpp"
#include "Boid.hpp"

class Playground : public IDisplay {
public:
    Playground() {
        sf::Color color = sf::Color::White;

        // Setup les components UI
        _background = sf::RectangleShape(sf::Vector2f(1920, 1080));
        _background.setFillColor(sf::Color::Black);
        _ButtonContainer = sf::RectangleShape(sf::Vector2f(1920, 200));
        _ButtonContainer.setPosition(sf::Vector2f(0, 920));
        _ButtonContainer.setFillColor(sf::Color::Blue);

        // Setup les boutons
        _playButton = Button("Play", sf::Vector2f(70, 950), sf::Vector2f(200, 50), color);
        _pauseButton = Button("Pause", sf::Vector2f(280, 950), sf::Vector2f(200, 50), color);
        _quitButton = Button("Quit", sf::Vector2f(1650, 950), sf::Vector2f(200, 50), color);
        _minusButton = Button("-", sf::Vector2f(1000, 950), sf::Vector2f(50, 50), color);
        _plusButton = Button("+", sf::Vector2f(1200, 950), sf::Vector2f(50, 50), color);

        // Setup les boids
        _nbBoids = 100;
        for (size_t i = 0; i < _nbBoids; i++) {
            _boids.push_back(Boid());
        }
    };
    ~Playground() override {};

    std::string run(sf::RenderWindow &window) override;
    void display(sf::RenderWindow &window) override;

private:
    // Content
    size_t _nbBoids;
    std::vector<Boid> _boids;

    // Components UI
    sf::RectangleShape _background;
    sf::RectangleShape _ButtonContainer;

    // Boutons
    Button _plusButton;
    Button _minusButton;
    Button _pauseButton;
    Button _playButton;
    Button _quitButton;

};


#endif //BOIDS_PLAYGROUND_HPP
