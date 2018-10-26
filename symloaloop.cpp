
#include "symloaloop.h"

symloaloop::symloaloop (int width, int hight, std::string title)

{
_symData1->window.create(sf::videoMode (width,hight),
title, sf::Syle::Close | sf::Style::Titlebar);
this->Run();
}
void symloaloop::Run()
{
float newTime, frameTime, interpolation;
float currentTime = this->_symOrginClock.getEplasedTime().asSeconds();

float accumulator = 0.0f;

while (this->_symData1->window.isOpen())
{

newTime = this->_symOrginClock.getElapsedTime().asSeconds();

 frameTime = newTime - currentTime;
 if (frameTime > 0.25f)

{
frameTime = 0.25f;
 }

currentTime = newTime;
accumulator += frameTime;
  while (accumulator >= dt)
  {
//  this->_symData1->//(mechinz.acitestates,()->handleinput )
//this ->_symData1 ->// mechines .getacivestate() -> Update(dt);
accumulator-=dt;
  }

interpolation = accumulator/dt;
//this->data->machine.getacitvestate()-Draw(float dt//interpolation);
}
}



}
