// R_linez.h

#pragma once
#include <SFML/Graphics.hpp>

class R_linez : public entity

private:

R_lines(railhubz& hub1, railhubz& hub2) : initialize();

~R_linez();

sf::VertexArray rail_linez_array;

float RL_x1  =0.f;
float RL_y1 =0.f;
loat RL_x2  =0.f;
float RL_y2 =0.f;


void draw(sf::RenderWindow &window,int& total_R_linez);
   {
   for (int i = 0; i<total_R_linez ; i++)
       {window.draw(R_linez[i] ); }
   }
getstatus();
void initialize();
{


}
void *recivemsg();
update_line();
