/*
**  Project Name : Microcosme
**  Authors: Crooser, Steci, Tom BP
**  Date: 2023-04-01
**  File: IDisplay.hpp
**  Description: IDisplay class interface
*/

#ifndef IDISPLAY_HPP
#define IDISPLAY_HPP

#include <SFML/Graphics.hpp>

class IDisplay {
public:
    virtual ~IDisplay() = default;

    virtual std::string run(sf::RenderWindow &window) = 0;
    virtual void display(sf::RenderWindow &window) = 0;
};

#endif //IDISPLAY_HPP
