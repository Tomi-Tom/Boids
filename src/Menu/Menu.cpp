//
// Created by Tomi-Tom on 3/28/23.
//

#include <iostream>
#include "Menu.hpp"

void Menu::display(sf::RenderWindow &window) {
    window.draw(_background);
    window.draw(_ButtonContainer);
    _playButton.display(window);
    _settingsButton.display(window);
    _quitButton.display(window);
}