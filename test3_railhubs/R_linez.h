// R_linez.h

#pragma once
#include <SFML/Graphics.hpp>
 #include <SFML/Window.hpp>
 #include <SFML/System.hpp>
 #include <SFML/OpenGL.hpp>

#include "trainz.h"
#include "railhubz.h"
#include "R_linez.h"

#include <time.h>
#include <stack>

                            class railhubz;
template <typename T> float sgn(T val) {
    return (T(0) < val) - (val < T(0));
}

class R_linez // public entity
{
protected:
    sf::VertexArray rail_linez_array;

//sf::VertexArray rail_linez_array;
 //

                                float RL_x1  =0.f;
                                float RL_y1 =0.f;
                                float RL_x2  =0.f;
                                float RL_y2 =0.f;

float AcessArray_Drection=0;
bool AcessArray_channels[2] = {false};

//railhubz* rOrign_Station;
//railhubz* rDestination_station;

public:
    int line_id;
R_linez(const railhubz& hub_1, const railhubz& hub_2, int& total_R_linez);
    //R_linez(const railhubz::railhubz& hub_start, const railhubz::railhubz& Hub_dest, int& total_trainz);
    //R_linez (railhubz&, railhubz&, int&);
    //: initialize();

    ~R_linez();


void draw(sf::RenderWindow &window);

bool can_add_train();


//getstatus();
//void initialize();
//update_line();



};
