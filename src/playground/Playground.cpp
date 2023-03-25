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
    this->_skin = sf::Sprite(texture);

    for (int i = 0; i < 100; i += 1) {
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
        this->_skin.setRotation(boid->getAngle());
        this->_skin.setScale(scale, scale);
        this->_skin.setOrigin(this->_skin.getLocalBounds().width / 2, this->_skin.getLocalBounds().height / 2);

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