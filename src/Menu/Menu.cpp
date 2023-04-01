/*
**  Project Name : Microcosme
**  Authors: Crooser, Steci, Tom BP
**  Date: 2023-04-01
**  File: Menu.cpp
**  Description: Menu class implementation
*/

#include <iostream>
#include "Menu.hpp"

std::string Menu::run(sf::RenderWindow &window) {
    display(window);
    if (_playButton.isClicked())
        return "Playground";
    if (_quitButton.isClicked())
        return "Quit";
    return "Menu";
}

void Menu::display(sf::RenderWindow &window) {
    window.draw(_background);
    window.draw(_buttonContainer);
    _playButton.display(window);
    _quitButton.display(window);
}
