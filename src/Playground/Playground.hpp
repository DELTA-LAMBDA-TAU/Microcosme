/*
**  Project Name : Microcosme
**  Authors: Crooser, Steci, Tom BP
**  Date: 2023-04-01
**  File: Playground.cpp
**  Description: Playground class implementation
*/

#ifndef PLAYGROUND_HPP
#define PLAYGROUND_HPP

#include <SFML/Graphics.hpp>
#include "IDisplay.hpp"
#include "Button.hpp"

class Playground : public IDisplay {
public:
    Playground() : _pause(false) {
        sf::Color color = sf::Color(253, 217, 163);

        // Setup les components UI
        _background = sf::RectangleShape(sf::Vector2f(1920, 1080));
        _background.setFillColor(sf::Color(48, 43, 52));
        _ButtonContainer = sf::RectangleShape(sf::Vector2f(1920, 200));
        _ButtonContainer.setPosition(sf::Vector2f(0, 920));
        _ButtonContainer.setFillColor(sf::Color(63, 57, 68));

        // Setup les boutons
        _playButton = Button("Play", sf::Vector2f(50, 950), sf::Vector2f(100, 50), color);
        _pauseButton = Button("Pause", sf::Vector2f(160, 950), sf::Vector2f(100, 50), color);
        _quitButton = Button("Quit", sf::Vector2f(1650, 950), sf::Vector2f(200, 50), color);
        _minusButton = Button(" -", sf::Vector2f(1000, 950), sf::Vector2f(50, 50), color);
        _plusButton = Button("+", sf::Vector2f(1200, 950), sf::Vector2f(50, 50), color);

    };
    ~Playground() override {};

    std::string run(sf::RenderWindow &window) override;
    void display(sf::RenderWindow &window) override;

private:
    // Content
    bool _pause;

    // Components UI
    sf::RectangleShape _background;
    sf::RectangleShape _ButtonContainer;

    // Boutons
    Button _plusButton;
    Button _minusButton;
    Button _pauseButton;
    Button _playButton;
    Button _quitButton;

    // Utils
    void handlePause();
    void handleNbEntities();

};


#endif //PLAYGROUND_HPP
