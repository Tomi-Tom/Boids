//
// Created by Tomi-Tom on 3/27/23.
//

#pragma once

#include <SFML/Graphics.hpp>
#include <unordered_map>
#include <memory>
#include "IDisplay.hpp"
#include "Menu.hpp"
#include "Playground.hpp"

class Simulation {
public:
    Simulation() : _window(sf::VideoMode(1920, 1080), "Boids") {
        _displays["Menu"] = std::make_unique<Menu>();
        _displays["Playground"] = std::make_unique<Playground>();
        _currentDisplay = "Menu";
    }
    ~Simulation() {
        _displays.clear();
    };

    void run();

private:
    sf::RenderWindow _window;
    sf::Event _event;
    std::unordered_map<std::string, std::unique_ptr<IDisplay>> _displays;
    std::string _currentDisplay;

    void pollEvents();
};


