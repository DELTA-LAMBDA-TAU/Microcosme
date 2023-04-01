/*
**  Project Name : Microcosme
**  Authors: Crooser, Steci, Tom BP
**  Date: 2023-04-01
**  File: Simulation.cpp
**  Description: Simulation class implementation
*/

#include "Simulation.hpp"

void Simulation::pollEvents() {
    while (_window.pollEvent(_event)) {
        if (_event.type == sf::Event::Closed)
            _window.close();
    }
    if (_currentDisplay == "Quit")
        _window.close();
}

void Simulation::run() {
    while (_window.isOpen()) {
        pollEvents();
        _window.clear();
        if (_currentDisplay != "Quit")
            _currentDisplay = _displays[_currentDisplay]->run(_window);
        _window.display();
    }
}