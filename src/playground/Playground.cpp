//
// Created by Tomi-Tom on 3/25/23.
//

#include <iostream>
#include "../factory/Factory.hpp"
#include "Playground.hpp"

boids::Playground::Playground(sf::RenderWindow *window, int nbBoids) : _window(window) {
    boids::Factory factory = boids::Factory();
    sf::Texture texture;
    texture.loadFromFile("assets/basic_boid.png");
    sf::Sprite sprite(texture);
    this->_skin = sprite;

    for (int i = 0; i < nbBoids; i += 1) {
        this->_boids.push_back(factory.createBoid("basic"));
    }
}

void boids::Playground::pollEvent() {
    while(this->_window->pollEvent(this->_event)) {
        if (this->_event.type == sf::Event::Closed)
            this->_window->close();
    }
}

void boids::Playground::simulateBoids() {
    for (const auto& boid : this->_boids) {
        boid->simulate();
    }
}

void boids::Playground::displayBoids() {
    float scale = 0.01;

    for (const auto& boid : this->_boids) {
        this->_skin.setPosition(boid->getPosition().x, boid->getPosition().y);
        this->_skin.setOrigin(this->_skin.getLocalBounds().width / 2.0f, this->_skin.getLocalBounds().height / 2.0f);
        this->_skin.setRotation((boid->getAngle()));
        this->_skin.setScale(scale, scale);

        this->_window->draw(this->_skin);
    }
}

void boids::Playground::simulate() {
    while (this->_window->isOpen()) {
        pollEvent();
        this->_window->clear();
        simulateBoids();
        displayBoids();
        this->_window->display();
    }
}