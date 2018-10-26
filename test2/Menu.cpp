//menu.cpp
#include "Menu.h"
#include <string>
Menu::Menu(float width, float hight)
{
if (!font.loadFromFile("Prociono.ttf"))
{// halde errors

}

std::string itemzero;
std::string item1;
std::string item2;
std::string item3;


itemzero = "Help_CMDZ//infoz";
item1 = "MainOrburo;Cmd_;";
item2 = "BuildOps";
item3 = "data_cmd_grpahz";


mtextary[0].setFont(font);
mtextary[0].setColor(sf::Color::Green);
mtextary[0].setString(itemzero);
mtextary[0].setPosition(sf::Vector2f(width/2, hight/(MAX_NUMBER_OF_ITEMS+1)*1));

mtextary[1].setFont(font);
mtextary[1].setColor(sf::Color::Blue);
mtextary[1].setString(item1);
mtextary[1].setPosition(sf::Vector2f(width/2, hight/(MAX_NUMBER_OF_ITEMS+1)*2));

mtextary[2].setFont(font);
mtextary[2].setColor(sf::Color::Red);
mtextary[2].setString(item2);
mtextary[2].setPosition(sf::Vector2f(width/2, hight/(MAX_NUMBER_OF_ITEMS+1)*3));

mtextary[3].setFont(font);
mtextary[3].setColor(sf::Color::Red);
mtextary[3].setString(item3);
mtextary[3].setPosition(sf::Vector2f(width/2, hight/(MAX_NUMBER_OF_ITEMS+1)*4));

selectedItemIindex =0;
}

Menu::~Menu()
{}

void Menu::draw(sf::RenderWindow &window)
{

for (int i = 0; i< MAX_NUMBER_OF_ITEMS; i++)
    {window.draw(mtextary[i] ); }
}

void Menu::MoveUp()
{   if (selectedItemIindex -1>=0)
    {    mtextary[selectedItemIindex].setColor(sf::Color::White);
         selectedItemIindex--;
         mtextary[selectedItemIindex].setColor(sf::Color::Green);

    }
}


void Menu::MoveDown()
{   if (selectedItemIindex +1<MAX_NUMBER_OF_ITEMS)
    {    mtextary[selectedItemIindex].setColor(sf::Color::Blue);
         selectedItemIindex++;
         mtextary[selectedItemIindex].setColor(sf::Color( 1,50,20 ));
    }
}
