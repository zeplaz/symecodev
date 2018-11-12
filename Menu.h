//meny.h


//#pragma once

#ifndef MENU_H
#define MENU_H
//#include <SFML/Grahpics.hpp>
#include <SFML/Graphics.hpp>
//#include <SFML/Window/Event.hpp>
#include <SFML/System.hpp>
#define MAX_NUMBER_OF_ITEMS 7
class Menu
{

public:
Menu(float width, float hight);
~Menu();
    void draw(sf::RenderWindow& window);
    void MoveUp();
    void MoveDown();
    int GetPressedItem(){return selectedItemIindex;}

    protected :
        int selectedItemIindex;
        sf::Font font;
        sf::Text mtextary[MAX_NUMBER_OF_ITEMS];
};
#endif
