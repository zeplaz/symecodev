
#pragma once

#include <memory>
#include <string>

#include <SFML/Graphics.hpp>

//include logic mechines

//inxlusw mangers
#include "AssetManager.hpp"
#include "InputManager.hpp"


struct SymData
{
    //mechines
    sf::RenderWindow window;
    AssetManager assets;
    InputManger input;

};

typedef std::shared_ptr<SymData> SymDatptr;

class symloaloop
{
public :
symPrimayLoop (int width, int hight, std::string title);

private: const float dt= 1.0f/60f;
sf::clock _symOrginClock;
SymDatptr _symData1 = std::make_shared<SymData>();

void Run();


};
