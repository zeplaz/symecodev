#pragma once

#include <SFML/Graphics.hpp>

l

class InputManger

{ public:
InputManager() {}
~InputManger( ) {}

bool IsSpriteClicked (sf::Sprite object,sf::Mouse::Button button1,
sf:: RenderWindow &window);

bool IsMenuItemClicked (Menu obj_menu, sf::Mouse Button Button1,
sf::RenderWindow &window);

sf::Vector2i InputManager::GetMousePostion(sf:: Renderwindow & window)
{}

 sf::Vector2i RenderWindow &window);


};
