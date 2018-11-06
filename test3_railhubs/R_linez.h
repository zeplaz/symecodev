// R_linez.h

#pragma once
#include <SFML/Graphics.hpp>

template <typename T> float sgn(T val) {
    return (T(0) < val) - (val < T(0));
}

class R_linez // public entity
{
private:
sf::VertexArray rail_linez_array;

                                float RL_x1  =0.f;
                                float RL_y1 =0.f;
                                float RL_x2  =0.f;
                                float RL_y2 =0.f;

float AcessArray_Drection=0;
bool AcessArray_channels[2] = {false};

public:
    int line_id;

    //R_linez (railhubz&, railhubz&, int&);
    //: initialize();

    ~R_linez();


void draw(sf::RenderWindow &window,int& total_R_linez);

bool can_add_train();

R_linez(railhubz* hub_start, railhubz* Hub_dest, int& total_trainz);

//getstatus();
//void initialize();
//update_line();



};
