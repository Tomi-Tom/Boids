//
// Created by Tomi-Tom on 3/25/23.
//

#include <iostream>
#include "../factory/Factory.hpp"
#include "Playground.hpp"

boids::Playground::Playground(sf::RenderWindow *window) : _window(window) {
    boids::Factory factory = boids::Factory();
    sf::Texture texture;
    texture.loadFromFile("assets/basic_boid.png");
    this->_skin = texture;

    for (int i = 0; i < 1000; i += 1) {
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
    sf::Sprite sprite(this->_skin);

    for (const auto& boid : this->_boids) {
        sprite.setPosition(boid->getPosition().x, boid->getPosition().y);
        sprite.setOrigin(sprite.getLocalBounds().width / 2.0f, sprite.getLocalBounds().height / 2.0f);
        sprite.setRotation((boid->getAngle()));
        sprite.setScale(scale, scale);

        this->_window->draw(sprite);
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