/*
**  Project Name : Microcosme
**  Authors: Crooser, Steci, Tom BP
**  Date: 2023-04-01
**  File: Playground.cpp
**  Description: Playground class implementation
*/

#include "Playground.hpp"

void Playground::handleNbEntities() {
    if (_plusButton.isClicked()) {
    }
    if (_minusButton.isClicked()) {
    }
}

void Playground::handlePause() {
    if (_playButton.isClicked())
        _pause = false;
    if (_pauseButton.isClicked())
        _pause = true;
}

std::string Playground::run(sf::RenderWindow &window) {
    // run simulation
    handlePause();
    display(window);
    if (_quitButton.isClicked())
        return "Menu";
    return "Playground";
}

void Playground::display(sf::RenderWindow &window) {
    sf::Text text;
    sf::Font font;
    font.loadFromFile("assets/fonts/arial.ttf");
    text.setFont(font);
    text.setString("Entities: " + 0);
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White);
    text.setPosition(1070, 960);

    window.draw(_background);

    window.draw(_ButtonContainer);
    _playButton.display(window);
    _quitButton.display(window);
    _plusButton.display(window);
    _minusButton.display(window);
    _pauseButton.display(window);
    window.draw(text);

}